#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function

int a[9][9],i,b,c,q=0,solution[9][9];;

// Function declarations
void start_timer();
void pause_timer();
void resume_timer();
void show_elapsed_time();
void manual_solving();
void manual_solving1();
void provide_hint();
int is_sudoku_complete();
int is_valid(int row, int col, int num);
int solve_sudoku();
int validate_input();
void print_grid();
int grids(int ,int ,int );
int sudoku();
int question();
void check_sudoku();
void about_sudoku();
int total_time;  // Timer duration in seconds
time_t start_time, pause_time;
int is_paused = 0;
int function(char q2){
	int n,sum=0,product=1,a[100];
	if(q2=='1')
	printf("How many numbers you want to add?\n");
    else
	printf("How many numbers you want to multiply?\n");
		scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(q2=='1')
			sum+=a[i];
		else
		product*=a[i];	
	}
	if(q2=='1')
	return sum;
	else
	return product;
}


int main()
{
	char q1='\0';
	while(1){
		char q1='\0',q2='\0',q3='\0';
		printf("\n\nmain menu:\n");
		printf("1) Calculator\n2) Converter\n3) Play sudoku\n4) Exit\n");
		printf("Enter your choice(1-4): ");
		scanf(" %[^\n]",&q1);
		if(q1=='4'){
	printf("\n\t\t\t-----*Thank You*-----\n");
	return 0;
}
switch(q1){
	case'1':
		while(q2!='6'){
			q2='\0';
			q3='\0';
			int n,a[100];
			printf("\nmenu1:\n");
	printf("1) addition\n");
	printf("2) subtraction\n");
	printf("3) multiplication\n");
	printf("4) division\n");
	printf("5) percentage\n");
	printf("6) back\n");
	printf("Enter your choice(1-6): ");
	scanf(" %[^\n]",&q2);
	switch(q2)
	{
		int result;
		float a,b,c;
		case'1':result=function(q2);
		printf("sum=%d\n",result);
		break;
		case'2':printf("Enter two numbers: ");
			scanf("%f%f",&a,&b);
			c=a-b;
		printf("%.5f - %.5f = %.5f\n",a,b,c);
		break;
		case '3':result=function(q2);
		printf("product=%d\n",result);
		break;
		case'4':printf("Enter two numbers: ");
		scanf("%f%f",&a,&b);
		c=a/b;
		printf("%f/%f = %f\n",a,b,c);
		break;
		case'5':printf("Enter value and total value: ");
		scanf("%d%d",&a,&b);
		c=(a/b)*100;
		printf("percentage = %f%%\n",c);
		break;
		case'6': printf("\n\t\t\t----*THANK YOU*----\n");
		break;
		default:printf("Invalid option.Please try again: ");
	}
	}break;
	case'2':
		while(q2!='5'){
			q2='\0';
			q3='\0';
	printf("\n1) convert time\n2) convert weight\n3) convert volume\n4) convert length\n5) exit\n");
	printf("Enter your choice(1-5): ");
	scanf (" %[^\n]",&q2);
	switch(q2){
	
		case'1':  
    float hr, min, sec;
    while (q3!='4') {
    	q3='\0';
        printf("\nMenu2:\n");
        printf("1) Hours\n");
        printf("2) Minutes\n");
        printf("3) seconds\n");
        printf("4) back\n");
        printf("Enter your choice(1-4): ");
        scanf(" %[^\n]", &q3);  
        switch (q3) {
            case '1':
                printf("Enter hours: ");
                scanf("%f", &hr);
                min = hr * 60,sec=hr*3600;
                printf("%f hours = %f minutes = %f seconds\n",hr, min,sec);
                break;
            case '2':
                printf("Enter minutes: ");
                scanf("%f", &min);
                sec = min * 60,hr=min/60;
                printf("%f minutes = %f seconds = %f hours\n",min, sec,hr);
                break;
            case '3':
                printf("Enter seconds: ");
                scanf("%f", &sec);
                min = sec / 60,hr=sec/3600;
                printf("%f seconds = %f minutes = %f hours\n",sec, min,hr);
                break;
            case '4':
                printf("backed\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }break;
    case'2':float kg,g,ton;
    while(q3!='4'){
    	q3='\0';
    printf("\nmenu3:\n");
    printf("1) ton\n");
    printf("2) kilogram\n");
    printf("3) gram\n");
    printf("4) back\n");
    printf("Enter your choice(1-4): ");
    scanf(" %[^\n]",&q3);
    switch(q3){
    	case'1':printf("Enter tons: ");
    	scanf("%f",&ton);
    	kg=ton*1000,g=ton*1000000;
    	printf("%f tons = %f kilograms = %f grams\n",ton,kg,g);
    	break;
		case'2':printf("Enter kilograms: ");
    	scanf("%f",&kg);
    	ton=kg/1000,g=kg*1000;
    	printf("%f kilograms = %f tons = %f grams\n",kg,ton,g);
    	break;
    	case'3':printf("Enter grams: ");
    	scanf("%f",&g);
    	ton=g/1000000,kg=g/1000;
    	printf("%f grams = %f tons = %f kilograms\n",g,ton,kg);
    	break;
    	case'4':printf("backed\n");
    	break;
    	default: printf("Invalid choice. Please try again.\n");
	}
}break;
case'3':float ml,l,mc;
while(q3!='4'){
	q3='\0';
printf("\nmenu4:\n");
printf("1) liter\n");
printf("2) milliliter\n");
printf("3) microliter\n");
printf("4) back\n");
printf("Enter your choice(1-4): ");
scanf(" %[^\n]",&q3);
switch(q3){
	case'1':printf("Enter liters: ");
	scanf("%f",&l);
	ml=l*1000,mc=l*1000000;
	printf("%f liters = %f mililiters = %f microliters\n",l,ml,mc);
	break;
	case'2':printf("Enter millliters: ");
	scanf("%f",&ml);
	l=ml/1000,mc=ml*1000;
	printf("%f  milliliters = %f liters = %f microliters\n",ml,l,mc);
	break;
	case'3':printf("Enter microliters: ");
	scanf("%f",&mc);
	l=mc/1000000,ml=mc/1000;
	printf("%f  microliters = %f liters = %f milliliters\n",mc,l,ml);
	break;
	case'4':printf("backed\n");
   	break;
   	default: printf("Invalid choice. Please try again.\n");	
}
}break;
case'4':float km,m,cm;
while(q3!='4'){
	q3='\0';
	printf("\nmenu5:\n");
	printf("1) kilometers\n");
	printf("2) meters\n");
	printf("3) centimeters\n");
	printf("4) back\n");
	printf("Enter your choice(1-4): ");
	scanf(" %[^\n]",&q3);
	switch(q3){
		case'1':printf("Enter kilometers: ");
		scanf("%f",&km);
		m=km*1000,cm=km*100000;
		printf("%f kilometers = %f meters = %f centimeters\n",km,m,cm);
		break;
		case'2':printf("Enter meters: ");
		scanf("%f",&m);
		km=m/1000,cm=m*100;
		printf("%f meters = %f kilometers = %f centimeters\n",m,km,cm);
		break;
		case'3':printf("Enter centimeters: ");
		scanf("%f",&cm);
		km=cm/100000,m=cm/100;
		printf("%f centimeters = %f kilometers = %f meters\n",cm,km,m);
		break;
		case'4':printf("backed\n");
    	break;
    	default: printf("Invalid choice. Please try again.\n");
	}
}break;
case'5':printf("\n\t\t\t----*THANK YOU*----");
break;
default: printf("Incorrect option. Please enter 1-5\n");
}
		}break;
	case '3':q2='\0';
		while(q2!='4'){
			q2='\0';
	printf("\t\t\t----*SUDOKU*----\n\n");
	printf("1) Solve\n");
	printf("2) Check my answer\n");
	printf("3) About sudoku\n");
	printf("4) Exit\n");
	printf("Enter your choice(1-4): ");
	scanf(" %[^\n]",&q2);
	switch(q2)
	{
		int g;
		case '1':
		invalid:printf("\n1) I have a question\n");
		printf("2) I don't have a question. Give me\n");
		printf("Enter your choice(1-2): ");
		scanf("%d",&g);
		if(g==1){
			sudoku();
			break;
		}else if(g==2){
			 question();
			break;
		}else{
			printf("\nInvalid choice. Please enter 1 or 2\n");
			goto invalid;
		}break;
		case '2':
		check_sudoku();
		break;
		case '3': about_sudoku();
		break;
		case '4': 
		printf("\n\n\t\t\t-----*THANK YOU*-----");
		break;
		default:printf("Incorrect value. Please enter between 1-4\n");
	}
	}

     }
		}
        	}
	
int sudoku() 
{
	
    printf("\t\t\t----* SUDOKU SOLVER *----\n\n");
    int k=1,a1=0;
    printf("Enter your Sudoku puzzle row by row (0 for empty cells):\n-1) For one step back\n-2) For exit\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
        	
        	printf("Value %d: ",k);
            scanf("%d", &a[i][j]);
            if (a[i][j] < -2 || a[i][j] > 9) {
                printf("Invalid input. Please enter between 1-9.\n");
                j-=2;
                continue;
            }
            if(a[i][j]==-1){
            	j-=2;
            	k--;
            	continue;
			}if(a[i][j]==-2){
			a1=1;
			break;
            	
			}
			k++;
        }if(a1==1){
        	printf("Exited...\n");
        	return 0;
		}
        
    }

    if (!validate_input()) {
        printf("\nThe entered Sudoku puzzle is invalid. Please check your input.\n");
        return 0;
    }

    printf("\nYour Sudoku input is valid!\n");
    printf("Do you want to solve it manually or get the solution?\n");
    printf("1) Solve manually\n2) Get the solution\nEnter your choice (1-2): ");
    
    int choice;
    scanf("%d", &choice);

    if (choice == 2) {
        if (solve_sudoku()) {
            printf("\nSolved Sudoku:\n");
            print_grid();
        } else {
            printf("\nNo solution exists for the given Sudoku puzzle.\n");
        }
    } else if (choice == 1) {
    	printf("\nDo you want a timer?\n1) Yes\n2) No\n");
    int v;
    do {
        printf("Enter 1 or 2: ");
        scanf("%d", &v);
    } while (v != 1 && v != 2);
    if (v == 1) {
        printf("Enter the total time for the game in seconds: ");
        scanf("%d", &total_time);
        if (total_time <= 0) {
            printf("Invalid time. Please enter a positive number.\n");
            return 1;
        }
        
        printf("\nStarting Sudoku solver with a timer of %d seconds.\n", total_time);
        start_timer();
		manual_solving();  // Hand over control to manual solving with the sample puzzle

    }else{

    printf("\nStart solving the Sudoku!\n");
    manual_solving1();  // Hand over control to manual solving with the sample puzzle


}
}return 0;
}

int question() {
    printf("\nSample Sudoku (Fill the blank spaces):\n");
    int sample[9][9] = {
        {5, 0, 0, 6, 0, 0, 0, 0, 2},
        {6, 0, 0, 0, 9, 0, 3, 0, 8},
        {0, 0, 8, 3, 0, 2, 0, 6, 0},
        {8, 5, 0, 0, 0, 1, 4, 0, 0},
        {4, 0, 6, 0, 0, 0, 7, 0, 1},
        {0, 0, 3, 9, 0, 0, 0, 5, 6},
        {0, 6, 0, 5, 0, 7, 2, 0, 0},
        {2, 0, 7, 0, 1, 0, 0, 0, 5},
        {3, 0, 0, 0, 0, 6, 0, 0, 9}
    };

    // Copy sample puzzle to global array 'a'
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            a[i][j] = sample[i][j];
        }
    }

    print_grid();  // Display the sample Sudoku puzzle

    printf("\nDo you want a timer?\n1) Yes\n2) No\n");
    int v;
    do {
        printf("Enter 1 or 2: ");
        scanf("%d", &v);
    } while (v != 1 && v != 2);

    if (v == 1) {
        printf("Enter the total time for the game in seconds: ");
        scanf("%d", &total_time);
        if (total_time <= 0) {
            printf("Invalid time. Please enter a positive number.\n");
            return 1;
        }
        
        printf("\nStarting Sudoku solver with a timer of %d seconds.\n", total_time);
        start_timer();
		manual_solving();  // Hand over control to manual solving with the sample puzzle

    }else{
    	  printf("\nStart solving the Sudoku!\n");
    manual_solving1();  // Hand over control to manual solving with the sample puzzle

	}

  
    return 0;
}

// Function to check if placing 'num' at a[row][col] is valid
int is_valid(int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (a[row][i] == num || a[i][col] == num) {
            return 0;
        }
        int box_row = 3 * (row / 3) + i / 3;
        int box_col = 3 * (col / 3) + i % 3;
        if (a[box_row][box_col] == num) {
            return 0;
        }
    }
    return 1;
}

// Validate the initial input for conflicts
int validate_input() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (a[row][col] != 0) {
                int num = a[row][col];
                a[row][col] = 0;
                if (!is_valid(row, col, num)) {
                    a[row][col] = num;
                    return 0;
                }
                a[row][col] = num;
            }
        }
    }
    return 1;
}

// Backtracking function to solve Sudoku
int solve_sudoku() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (a[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (is_valid(row, col, num)) {
                        a[row][col] = num;
                        if (solve_sudoku()) {
                            return 1;
                        }
                        a[row][col] = 0;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}

// Function to print the Sudoku grid
void print_grid() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", a[i][j]);
            if (j == 2 || j == 5) printf("| ");
        }
        printf("\n");
        if (i == 2 || i == 5) printf("------*-------*------\n");
    }
}





void start_timer() {
    start_time = time(NULL);
    is_paused = 0;
}

void pause_timer() {
    if (!is_paused) {
        pause_time = time(NULL);
        is_paused = 1;
        int remaining_time = total_time - (pause_time - start_time);
        printf("\nTimer paused. Time remaining: %d seconds.\n", remaining_time > 0 ? remaining_time : 0);
    } else {
        printf("\nTimer is already paused.\n");
    }
}

void resume_timer() {
    if (is_paused) {
        start_time += (time(NULL) - pause_time);  // Adjust start time to account for pause duration
        is_paused = 0;
        printf("\nTimer resumed.\n");
    } else {
        printf("\nTimer is not paused.\n");
    }
}

int time_remaining() {
    if (is_paused) return total_time - (pause_time - start_time);
    return total_time - (time(NULL) - start_time);
}

void show_time_remaining() {
    int remaining = time_remaining();
    printf("\nTime remaining: %d seconds\n", remaining > 0 ? remaining : 0);
}


int is_valid(int row, int col, int num);  // Placeholder for validation function
int is_sudoku_complete();  // Placeholder for checking completion

void manual_solving() {
    
    int pos, value;
    printf("\nEnter position (1-81) and value (1-9), or:\n");
    printf("- Enter 0 to pause\n- Enter -1 to resume\n- Enter -2 for a hint\n- Enter -3 to exit\n");

    while (1) {
        if (time_remaining() <= 0) {
            printf("\nTime's up! You ran out of time.\n");
            return;
        }

        printf("\nPosition: ");
        scanf("%d", &pos);

        if (pos == 0) {
            pause_timer();
            continue;
        } else if (pos == -1) {
            resume_timer();
            continue;
        } else if (pos == -2) {
            provide_hint();
            continue;
        } else if (pos == -3) {
            printf("\nExiting manual solving. Final state:\n");
            print_grid();
            show_time_remaining();
            return;
        }

        if (pos < 1 || pos > 81) {
            printf("Invalid position. Please enter a value between 1 and 81.\n");
            continue;
        }

        int row = (pos - 1) / 9;
        int col = (pos - 1) % 9;
        if(a[row][col]!=0){
        	printf("Entered position already has a correct number. Try another\n");
        	continue;
		}
        printf("Enter value (1-9): ");
        scanf("%d", &value);

        if (value < 1 || value > 9 || !is_valid(row, col, value)) {
            printf("Invalid value for this position. Try again.\n");
            continue;
        }

        a[row][col] = value;
        printf("Value %d set at position %d.\n",value, pos);

        if (is_sudoku_complete()) {
            printf("\nCongratulations! You have completed the Sudoku.\n");
            print_grid();
            show_time_remaining();
            break;
        }
    }
}

void manual_solving1() {
    
    int pos, value;
    printf("\nEnter position (1-81) and value (1-9), or (0) For exit:\n");
    
    while (1) {
        
        printf("\nPosition: ");
        scanf("%d", &pos);

         if (pos == 0) {
            printf("\nExiting manual solving. Final state:\n");
            print_grid();
            return;
        }

        if (pos < 1 || pos > 81) {
            printf("Invalid position. Please enter a value between 1 and 81.\n");
            continue;
        }

        int row = (pos - 1) / 9;
        int col = (pos - 1) % 9;
        if(a[row][col]!=0){
        	printf("Entered position already has a correct number. Try another\n");
        	continue;
		}
        printf("Enter value: ");
        scanf("%d", &value);
         if (value == 0) {
            printf("\nExiting manual solving. Final state:\n");
            print_grid();
            return;
        }

        if (value < 1 || value > 9 || !is_valid(row, col, value)) {
            printf("Invalid value for this position. Try again.\n");
            continue;
        }

        a[row][col] = value;
        printf("Value %d set at position %d.\n",value, pos);

        if (is_sudoku_complete()) {
            printf("\nCongratulations! You have completed the Sudoku.\n");
            print_grid();
            show_time_remaining();
            break;
        }
    }
}


// Function to provide a hint
void provide_hint() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (a[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (is_valid(row, col, num)) {
                        printf("Hint: Try placing %d at position %d.\n", num, row * 9 + col + 1);
                        return;
                    }
                }
            }
        }
    }
    printf("No hints available.\n");
}

// Check if the Sudoku is complete
int is_sudoku_complete() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (a[i][j] == 0) return 0;
        }
    }
    return 1;
}
int grids(int x,int y,int z)
{
int b[9][9]={{5, 3, 4, 6, 7, 8, 9, 1, 2},{6, 7, 2, 1, 9, 5, 3, 4, 8},{1, 9, 8, 3, 4, 2, 5, 6, 7},{8, 5, 9, 7, 6, 1, 4, 2, 3},{4, 2, 6, 8, 5, 3, 7, 9, 1},{7, 1, 3, 9, 2, 4, 8, 5, 6},{9, 6, 1, 5, 3, 7, 2, 8, 4},{2, 8, 7, 4, 1, 9, 6, 3, 5},{3, 4, 5, 2, 8, 6, 1, 7, 9}};
	if(z==b[x][y]){
	return 1;
}
return 0;
}
 void check_sudoku()
{
	int j,i,k=1,b1=0;
		 printf("Enter all numbers (1-81):\n 0) For exit\n-1) For one step back\n");
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				printf("Enter value %d: ",k);
				scanf("%d",&a[i][j]);
				if(a[i][j]==-1){
					 j-=2;
					 k--;
					 continue;
				}if(a[i][j]==0){
					b1=1;
					break;
				}
				
				if(a[i][j]>9||a[i][j]<1){
					printf("Invalid number. Please enter between 1-9\n");
				     j-=2;
					 continue;
				}k++;
				
			}if(b1==1)
				break;
		}if(b1==1){
			printf("Exited\n");
			return;
		}
		
		int a1=0;
		for(b=0;b<9;b++){
		for(c=0;c<9;c++){
		for(i=0;i<9;i++){
			if (i==c)
			continue;
	if(a[b][c]==a[b][i]){
		a1=1;
		break;
	}if(a1==1)
	break;
	}if(a1==1)
	break;
	for(i=0;i<9;i++){
		if (i==b)
		continue;
		if(a[b][c]==a[i][c]){
			a1=1;
			break;
		}if(a1==1)
	break;
	}if(a1==1)
	break;

	
	 int x=b%3,w=c%3;
	for(i=b-x;i<b-x+3;i++){
		x=b%3,w=c%3;
		for(j=c-w;j<c-w+3;j++){
			if(b==i&&c==j)
			continue;
			if(a[b][c]==a[i][j]){
			a1=1;
		    break;
		}if(a1==1)
	     break;
		}if(a1==1)
		break;
	}if(a1==1)
		break;
	}if(a1==1)
		break;
	}
	printf("\nEntered sudoku:\n");
	for(int u=0;u<9;u++){
		for(int y=0;y<9;y++){
			printf("%d  ",a[u][y]);
		}printf("\n");
	}
	if(a1==1){
		printf("\nSorry. Your sudoku is incorrect\n");

	}else{
	printf("\nCongratulations. Your sudoku is all correct\n");
	
	}
}
void about_sudoku()
{
    printf("\n\t\t\t----* SUDOKU GUIDE *----\n\n");

    // Introduction to Sudoku
    printf("WHAT IS SUDOKU?\n");
    printf("Sudoku is a logic-based number-placement puzzle. The objective is to fill a 9x9 grid with digits\n");
    printf("so that each column, each row, and each of the nine 3x3 subgrids contain all the numbers from 1 to 9.\n\n");

    // Applications of Sudoku
    printf("APPLICATIONS OF SUDOKU:\n");
    printf("1. Enhances logical thinking and problem-solving skills.\n");
    printf("2. Improves concentration and attention to detail.\n");
    printf("3. Helps in developing pattern recognition.\n");
    printf("4. Used in cognitive training and mental exercise programs.\n\n");

    // Properties of Sudoku
    printf("PROPERTIES OF SUDOKU:\n");
    printf("1. It is a combinatorial number-placement puzzle.\n");
    printf("2. Each row, column, and 3x3 subgrid must contain numbers 1 to 9 exactly once.\n");
    printf("3. Every valid Sudoku has a unique solution.\n\n");

    // How to Solve Sudoku
    printf("HOW TO SOLVE SUDOKU:\n");
    printf("1. Understand the Grid:\n");
    printf("   - The grid is a 9x9 matrix divided into 9 smaller 3x3 subgrids.\n");
    printf("   - Your task is to fill each empty cell with a number from 1 to 9.\n\n");

    printf("2. Apply Sudoku Rules:\n");
    printf("   - Each row, column, and 3x3 subgrid must contain each number from 1 to 9 exactly once.\n\n");

    printf("3. Start with Easy Numbers:\n");
    printf("   - Look for cells where a number can only fit in one possible position in a row, column, or subgrid.\n\n");

    printf("4. Use Elimination:\n");
    printf("   - Check neighboring cells and eliminate numbers that already appear in the same row, column, or subgrid.\n\n");

    printf("5. Keep Track of Changes:\n");
    printf("   - Write down possible options for each cell and gradually narrow them down.\n\n");

    printf("6. Backtrack if Necessary:\n");
    printf("   - If you get stuck, go back and revise your earlier steps.\n");
    printf("   - Sometimes you'll need to undo some entries to find the right solution.\n\n");

    printf("7. Practice Regularly:\n");
    printf("   - The more you solve, the easier it becomes to spot patterns and solutions!\n\n");

    // Encouragement
    printf("Follow these steps, and you'll master Sudoku in no time. Good luck!\n\n");

    
}