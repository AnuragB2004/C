#include<stdio.h>
int main()
{
	int day, mnth, yr, nday, nmnth, nyr, more;
    printf("Enter date in DD MM YYYY format: ");
	scanf("%d %d %d", &day, &mnth, &yr);
	printf("Enter the additional nummber of days: ");
	scanf("%d", &more);
	if(yr%400 == 0 || yr%4 == 0)
	{
		switch(mnth)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if(day > 0 && day <= 31)
				{
					printf("This is a leap year.\n");
					nday = day + more;
	                nmnth = mnth;
	                nyr = yr;
                    int ctr;
                    switch(mnth)
                    {
                        case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                        case 4: case 6: case 9: case 11: ctr = 30; break;
                        case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                    ctr = 29;
                                else
                                    ctr = 28;
                                break;
                    }
                    while(nday > ctr)
                    {
                        nday -= ctr;
                        nmnth = nmnth + 1;
                        if(nmnth > 12)
                        {
                            nyr = nyr + 1;
                            nmnth = 1;
                        }
                        switch(mnth)
                        {
                            case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                            case 4: case 6: case 9: case 11: ctr = 30; break;
                            case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                        ctr = 29;
                                    else
                                        ctr = 28;
                                    break;
                        }
                    }
			 		printf("%d/%d/%d\n", nday, nmnth, nyr);
				}
		    	else
			 		printf("Invalid Date Input!!\n");
			 	break;
			case 4: case 6: case 9: case 11:
				if(day > 0 && day <= 30)
				{
					printf("This is a leap year.\n");
					nday = day + more;
                    nmnth = mnth;
                    nyr = yr;
                    int ctr;
                    switch(mnth)
                    {
                        case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                        case 4: case 6: case 9: case 11: ctr = 30; break;
                        case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                    ctr = 29;
                                else
                                    ctr = 28;
                                break;
                    }
                    while(nday > ctr)
                    {
                        nday -= ctr;
                        nmnth = nmnth + 1;
                        if(nmnth > 12)
                        {
                            nyr = nyr + 1;
                            nmnth = 1;
                        }
                        switch(mnth)
                        {
                            case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                            case 4: case 6: case 9: case 11: ctr = 30; break;
                            case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                        ctr = 29;
                                    else
                                        ctr = 28;
                                    break;
                        }
                    }
			 		printf("%d/%d/%d\n", nday, nmnth, nyr);
				}
		    	else
			 		printf("Invalid Date Input!!\n");
				break;
			case 2: if(day > 0 && day < 30)
					{
						printf("This is a leap year.\n");
						nday = day + more;
                        nmnth = mnth;
                        nyr = yr;
                        int ctr;
                        switch(mnth)
                        {
                            case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                            case 4: case 6: case 9: case 11: ctr = 30; break;
                            case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                        ctr = 29;
                                    else
                                        ctr = 28;
                                    break;
                        }
                        while(nday > ctr)
                        {
                            nday -= ctr;
                            nmnth = nmnth + 1;
                            if(nmnth > 12)
                            {
                                nyr = nyr + 1;
                                nmnth = 1;
                            }
                            switch(mnth)
                            {
                                case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                                case 4: case 6: case 9: case 11: ctr = 30; break;
                                case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                            ctr = 29;
                                        else
                                            ctr = 28;
                                        break;
                            }
                        }
				 		printf("%d/%d/%d\n", nday, nmnth, nyr);
					}
		    		else
			 			printf("Invalid Date Input!!\n");
					break;
			default: printf("Invalid Month Input!!\n");
		}
	}
	else
	{
		switch(mnth)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if(day > 0 && day <= 31)
				{
					printf("This is NOT a leap year.\n");
					nday = day + more;
                    nmnth = mnth;
                    nyr = yr;
                    int ctr;
                    switch(mnth)
                    {
                        case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                        case 4: case 6: case 9: case 11: ctr = 30; break;
                        case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                    ctr = 29;
                                else
                                    ctr = 28;
                                break;
                    }
                    while(nday > ctr)
                    {
                        nday -= ctr;
                        nmnth = nmnth + 1;
                        if(nmnth > 12)
                        {
                            nyr = nyr + 1;
                            nmnth = 1;
                        }
                        switch(mnth)
                        {
                            case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                            case 4: case 6: case 9: case 11: ctr = 30; break;
                            case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                        ctr = 29;
                                    else
                                        ctr = 28;
                                    break;
                        }
                    }
			 		printf("%d/%d/%d\n", nday, nmnth, nyr);
				}
		    	else
			 		printf("Invalid Date Input!!\n");
			 	break;
			case 4: case 6: case 9: case 11:
				if(day > 0 && day <= 30)
				{
					printf("This is NOT a leap year.\n");
					nday = day + more;
                    nmnth = mnth;
                    nyr = yr;
                    int ctr;
                    switch(mnth)
                    {
                        case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                        case 4: case 6: case 9: case 11: ctr = 30; break;
                        case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                    ctr = 29;
                                else
                                    ctr = 28;
                                break;
                    }
                    while(nday > ctr)
                    {
                        nday -= ctr;
                        nmnth = nmnth + 1;
                        if(nmnth > 12)
                        {
                            nyr = nyr + 1;
                            nmnth = 1;
                        }
                        switch(mnth)
                        {
                            case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                            case 4: case 6: case 9: case 11: ctr = 30; break;
                            case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                        ctr = 29;
                                    else
                                        ctr = 28;
                                    break;
                        }
                    }
			 		printf("%d/%d/%d\n", nday, nmnth, nyr);
				}
		    	else
			 		printf("Invalid Date Input!!\n");
				break;
			case 2: if(day > 0 && day < 29)
					{
						printf("This is NOT a leap year.\n");
						nday = day + more;
                        nmnth = mnth;
                        nyr = yr;
                        int ctr;
                        switch(mnth)
                        {
                            case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                            case 4: case 6: case 9: case 11: ctr = 30; break;
                            case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                        ctr = 29;
                                    else
                                        ctr = 28;
                                    break;
                        }
                        while(nday > ctr)
                        {
                            nday -= ctr;
                            nmnth = nmnth + 1;
                            if(nmnth > 12)
                            {
                                nyr = nyr + 1;
                                nmnth = 1;
                            }
                            switch(mnth)
                            {
                                case 1: case 3: case 5: case 7: case 8: case 10: case 12: ctr = 31; break;
                                case 4: case 6: case 9: case 11: ctr = 30; break;
                                case 2: if(nyr%400 == 0 || nyr %4 == 0)
                                            ctr = 29;
                                        else
                                            ctr = 28;
                                        break;
                            }
                        }
				 		printf("%d/%d/%d\n", nday, nmnth, nyr);
					}
		    		else
			 			printf("Invalid Date Input!!\n");
					break;
			default: printf("Envalid Month Input !!\n");
		}
	}
}