int is_prime(int x, int i) {
  if (x < 2) { 
    return 0;
  } else if (x == 2 || i * i > x) {
    return 1;
  } else if (x % 2 == 0 || x % i == 0) {
    return 0;
  } else {
    return is_prime(x, i + 1); 
  }
}
 
// Função para achar o próximo primo (também já foi apresentada no passado)
int next_prime(int x) {
    if(is_prime(x, 2)) return x;
    else return next_prime(x & 1 ? x + 2 : x + 1);
}
 
// MDC para verificar se é coprimo (MDC ser 1 = Números coprimos)
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}
 
// Somar todos os dígitos
int get_sum(int n){
    if(n == 0) return 0;
    return n % 10 + get_sum(n/10);
}
 
// Ler array
void read_arr(int i, int limit, int arr[], int arr2[]) {
    if(i == limit)
    {
        return;
    }
    
    scanf("%d %d", &arr[i], &arr2[i]);
    read_arr(i + 1, limit, arr, arr2);
}
 
// Bubble sort com uma só função
void sort(int i, int j, int arr[], int limit) {
    if(i >= limit)
    {
        return;
    }
    
    if(j >= limit)
    {
        return sort(i + 1, i + 2, arr, limit);
    }
        
    if(arr[i] > arr[j])
    {
        int aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
    }
    sort(i, j + 1, arr, limit);
}
 
// Apesar de parecer confuso, é só uma função pra verificar se é inválido
// A forma com que isso funciona é: A maioria das operações (<, >, ==) retornam um valor de 0 (Falso) ou 1 (Verdadeiro)
// Então Caso alguma dessas condições seja atendida vai retornar 1, ou seja dado inválido
int is_invalid_dice(int arr[], int x) {
    return arr[0] < 1 || arr[0] > 1500 || arr[x - 1] < 1 || arr[x - 1] > 1500 || arr[x/2] < 1 || arr[x/2] > 1500;
}
 
// Função em que tudo acontece
void solve(int n) {
    if(n == 0)
    {
        return;
    }
    
    
    int x, diceK[2000], diceO[2000];
    scanf("%d", &x);
    read_arr(0, x, diceO, diceK);
    
    sort(0, 1, diceK, x);
    sort(0, 1, diceO, x);
    
    int mainK = diceK[0] + diceK[x - 1] + diceK[x / 2];
    int mainO = diceO[0] + diceO[x - 1] + diceO[x / 2];
    int pk = is_prime(mainK, 2) +  (gcd(mainK, diceK[x - 1]) == 1) + is_prime(get_sum(next_prime(mainK + 1)), 2);
    int po = is_prime(mainO, 2) +  (gcd(mainO, diceO[x - 1]) == 1) + is_prime(get_sum(next_prime(mainO + 1)), 2);
    
    if(is_invalid_dice(diceK, x) == 1 || is_invalid_dice(diceO, x) == 1) {
        printf("valor fora do limite!\n");
    } else if(pk > po) {
        printf("Kcaj %d\n", mainK);
    } else if(po == pk) {
        printf("empate\n");
    } else {
        printf("Ordep %d\n", mainO);
    }
    solve(n - 1);
}
 
int main() {
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}