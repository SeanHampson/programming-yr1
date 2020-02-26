/*Simple Maths Quiz Game
    Up to 5 questions can be asked!
    Author: Seán Hampson
    Date: 22-10-2019
    Compiler: Borland
    OS: Windows 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // variables for menu selection and no. of Qs to be asked
    int select, numOfQ, qdone, correct, wrong;
    //array of user's answers for questions
    int answers[5] = { NULL };
    //array of questions set to true or false whether they should be in the quiz
    bool question_todo[5] = { NULL };
    //array of results for corresponding answers given by user i.e true or false
    bool question_results[5] = { NULL };
    //if exit is true the program wont loop
    bool exit = false;
    //checks if number of questions to be asked is in range of program
    bool outofrange;
    
    //main menu loop
    do
    {
        //menu UI and user input
        printf("=========================MATHS QUIZ GAME=========================\n");
        printf("Please select an option below:\n");
        printf("1.Enter  the  number  of  questions  to  be  asked  for  this  round  of  the  quiz (maximum of 5 questions allowed)\n2.Start quiz");
        printf("\n3.Display  the  number  of  questions  that  were  answered correctly and incorrectly for this round\n4.Exit Program\n> ");
        scanf("%d", &select);
        while(getchar() != '\n');
        
        //menu options
        switch(select)
        {
            //option 1 set how many questions to be asked
            case 1:
            {
                //clears screen-looks cleaner
                system("@cls||clear");
                //loops till correct number is inputted by user i.e within the range of available questions
                do
                {
                    printf("Enter the number of questions[1-5]\n> ");
                    scanf("%d", &numOfQ);
                    //clears buffer if character is given rather than integer
                    while(getchar() != '\n');
                        
                    //if number is out of range the input will loop
                    if(numOfQ < 1 || numOfQ > 5)
                    {
                        //clears screen-looks cleaner
                        system("@cls||clear");
                    
                        printf("[!]Error::invalid entry!\n\n");
                        outofrange = true;
                    }
                    else //if the number is in range break out of loop
                    {
                        //checks if the value is a character
                        if(isalpha(numOfQ))
                        {
                            //clears screen-looks cleaner
                            system("@cls||clear");
                    
                            printf("[!]Error::invalid entry!\n\n");
                            outofrange = true;
                        }//if its not a character take the value and break out of loop to menu
                        else
                        {
                            //clears screen-looks cleaner
                            system("@cls||clear");
                            outofrange = false;
                        }
                    }
                }while(outofrange == true);
                break;
            }//end case 1
                
            //option 2 start quiz
            case 2:
            {   
                //reset results from previous quiz
                for(int i = 0; i < 5; i++)
                {
                    question_results[i] = NULL;
                }
                
                //resets numbers of questions answered correctly and incorrectly from previous quiz
                wrong = 0;
                correct = 0;
                
                //if the number of questions has been set correctly start the quiz
                if(numOfQ > 0 && numOfQ < 6)
                {   
                    //sets up questions to be answered according to the setting in the menu
                    for(int i = 0; i < numOfQ; i++)
                    {
                        question_todo[i] = true;
                    }
                    
                    //clears screen-looks cleaner
                    system("@cls||clear");
                        
                    //question 1
                    if(question_todo[0] == true)
                    {
                        printf("Question 1 (6 + 10 = ?)\n> ");
                        scanf("%d", &answers[0]);
                        //clears buffer if character is given rather than integer
                        while(getchar() != '\n');
                            
                        if(answers[0] == 16)
                        {
                            question_results[0] = true;
                            correct++;
                            printf("\nYou entered: %d - Correct Answer!\n==================================", answers[0]);
                        }
                        else
                        {
                            if(isalpha((char)answers[0]))
                            {
                                wrong++;
                                printf("\nYou enetered a character! Incorrect answer!\n==================================");
                            }
                            else
                            {
                                wrong++;
                                printf("\nYou entered: %d - Incorrect Answer!\n==================================", answers[0]);
                            }
                        }
                    }
                        
                    //question 2                    
                    if(question_todo[1] == true)
                    {
                        printf("\nQuestion 2 (5^3 = ?)\n> ");
                        scanf("%d", &answers[1]);
                        //clears buffer if character is given rather than integer
                        while(getchar() != '\n');
                        
                        if(answers[1] == 125)
                        {
                            question_results[1] = true;
                            correct++;
                            printf("\nYou entered: %d - Correct Answer!\n==================================", answers[1]);
                        }
                        else
                        {
                            if(isalpha(answers[1]))
                            {
                                wrong++;
                                printf("\nYou enetered a character! Incorrect answer!\n==================================");
                            }
                            else
                            {
                                wrong++;
                                printf("\nYou entered: %d - Incorrect Answer!\n==================================", answers[1]);
                            }
                        }    
                    }
                        
                    //question 3
                    if(question_todo[2] == true)
                    {
                        printf("\nQuestion 3 (7 * 4 = ?)\n> ");
                        scanf("%d", &answers[2]);
                        //clears buffer if character is given rather than integer
                        while(getchar() != '\n');
                            
                        if(answers[2] == 28)
                        {
                            question_results[2] = true;
                            correct++;
                            printf("\nYou entered: %d - Correct Answer!\n==================================", answers[2]);
                        }
                        else
                        {
                            if(isalpha(answers[2]))
                            {
                                wrong++;
                                printf("\nYou enetered a character! Incorrect answer!\n==================================");
                            }
                            else
                            {
                                wrong++;
                                printf("\nYou entered: %d - Incorrect Answer!\n==================================", answers[2]);
                            }
                        }   
                    }
                        
                    //question 4
                    if(question_todo[3] == true)
                    {
                        printf("\nQuestion 4 (60 / 3 = ?)\n> ");
                        scanf("%d", &answers[3]);
                        //clears buffer if character is given rather than integer
                        while(getchar() != '\n');
                        
                        if(answers[3] == 20)
                        {
                            question_results[3] = true;
                            correct++;
                            printf("\nYou entered: %d - Correct Answer!\n==================================", answers[3]);
                        }
                        else
                        {
                            if(isalpha(answers[3]))
                            {
                                wrong++;
                                printf("\nYou enetered a character! Incorrect answer!\n==================================");
                            }
                            else
                            {
                                wrong++;
                                printf("\nYou entered: %d - Incorrect Answer!\n==================================", answers[3]);
                            }
                        }
                    }
                    
                    //question 5
                    if(question_todo[4] == true)
                    {
                        printf("\nQuestion 5 (3 * 15 = ?)\n> ");
                        scanf("%d", &answers[4]);
                        //clears buffer if character is given rather than integer
                        while(getchar() != '\n');
                        
                        if(answers[4] == 45)
                        {
                            question_results[4] = true;
                            correct++;
                            printf("\nYou entered: %d - Correct Answer!\n==================================", answers[4]);
                        }
                        else
                        {
                            if(isalpha(answers[4]))
                            {
                                wrong++;
                                printf("\nYou enetered a character! Incorrect answer!\n==================================");
                            }
                            else
                            {
                                wrong++;
                                printf("\nYou entered: %d - Incorrect Answer!\n==================================", answers[4]);
                            }
                        }
                    }
                    //keeps screen up in order for user to see what he got right and wrong
                    printf("\nPress any key to continue...");
                    getchar();
                    
                    //clears screen-looks cleaner
                    system("@cls||clear");
                    
                    //resets the number of questions to be asked for next round
                    qdone = numOfQ;
                    numOfQ = 0;
                }//end if for starting quiz
                else //otherwise force user to set a number in the menu
                {
                    //clears screen-looks cleaner
                    system("@cls||clear");
                    printf("[?]Please set the number of questions to be asked for this round!\n\n");
                }
                //reset number of questions to be asked
                for(int i = 0; i < 5; i++)
                {
                    question_todo[i] = NULL;
                }
                break;
            }//end case 2
                
            //option 3 display results
            case 3:
            {   //checks if user has done a test yet
                if(answers[0] == NULL)
                {
                    //clears screen-looks cleaner
                    system("@cls||clear");
                    printf("[?]You haven't done a quiz yet!\n\n");
                }
                else
                {   
                    //clears screen-looks cleaner
                    system("@cls||clear");
                    //will print out the results depending on how many they answered/ set to answer
                    for(int i = 0; i < qdone; i++)
                    {
                        printf("[+]Question %d Answer: %d is %s\n", i+1, answers[i], question_results[i] ? "true" : "false");
                    }
                    printf("\nYou answered %d correctly and %d incorrectly\n", correct, wrong);
                }
                break;
            }//end case 3
                
            //option 4 end program
            case 4:
            {
                exit = true;
                break;
            }//end case 4
            
            //invalid input output error
            default:
            {
                //clears screen-looks cleaner
                system("@cls||clear");
                printf("[!]Error::invalid entry!\n\n");
                break;
            }//end default
                
        }//end menu switch
    }while(exit == false); //end the do while loop for main program run
    
    flushall();
    return 0;
}