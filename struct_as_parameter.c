#include<stdio.h>

//Sending the structure as a parameter to functions.

struct Movie{
	
	char name[20];
	char director[30];
	int year;
};

int main(){
	
	int i;
	struct Movie movie={"The Godfather","Francis Ford Coppola",1972};
	
	show(movie);
	
	return 0;
}

void show(struct Movie a){
	printf("The name of the movie:%s\nThe director of movie:%s\nThe first screening year of the film:%d",a.name,a.director,a.year);
}

