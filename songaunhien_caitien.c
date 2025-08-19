#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main (int argc, char*argv[]) {
    
    //bien
    int game,cheDo1, cheDo2, luaChon, nguoiChoi1, nguoiChoi2, dem, soBiMat;
    game = 1;
    cheDo1 = 1;
    cheDo2 = 1;

    //chi tiet tro choi
    system ("cls");
    printf ("Doan so trung thuong !!!\n");
    printf ("(Bam Enter de tiep tuc)\n");
    system ("pause");

    //tro choi
    while (game) {
        
        system ("cls");
        printf ("1. Che do 1 nguoi choi.\n");
        printf ("2. Che do 2 nguoi choi.\n");
        printf ("3. Thoat.\n");
        printf ("Lua chon cua ban: ");
        scanf ("%d", &luaChon);

        //che do 1
        if (luaChon == 1) {
            
            //menu che do 1
            while (cheDo1) {
                
                system ("cls");
                printf ("1. 0 - 10 (de).\n");
                printf ("2. 0 - 100 (trung binh).\n");
                printf ("3. 0 - 1000 (kho).\n");
                printf ("Lua chon cua ban: ");
                scanf ("%d", &luaChon);

                //game 1
                if (luaChon == 1) {
                    
                    dem = 0;

                    system ("cls");
                    soBiMat = (rand() % 11) + 1;
                    printf ("Moi ban nhap so: ");
                    scanf ("%d", &nguoiChoi1);
                    
                    for (; ; dem++) {
                        
                        if (nguoiChoi1 > soBiMat) {
                            
                            system ("cls");
                            printf ("Lon hon, nhap lai: ");
                            scanf ("%d", &nguoiChoi1);
                        }

                        else if (nguoiChoi1 < soBiMat) {
                            
                            system ("cls");
                            printf ("Nho hon, nhap lai: ");
                            scanf ("%d", &nguoiChoi1);
                        }

                        else {
                            
                            system ("cls");
                            printf ("Ban doan trung roi, ban duoc thuong 10.000VND !!!\n");
                            printf ("So bi mat la: %d\n", soBiMat);
                            printf ("So lan ban doan sai: %d\n", dem);
                            printf ("Bam Enter de tiep tuc.\n");
                            system ("pause");
                            break;
                        }
                    }

                } //ket thuc game 1
                
                //game 2
                else if (luaChon == 2) {
                    
                    system ("cls");
                    dem = 0;
                    soBiMat = (rand() % 101) + 1;
                    printf ("Moi ban nhap so: ");
                    scanf ("%d", &nguoiChoi1);

                    for (; ; dem++) {
                        
                        if (nguoiChoi1 > soBiMat) {
                            system ("cls");
                            printf ("Lon hon, nhap lai: ");
                            scanf ("%d", &nguoiChoi1);
                        }

                        else if (nguoiChoi1 < soBiMat) {
                            system ("cls");
                            printf ("Nho hon, nhap lai: ");
                            scanf ("%d", &nguoiChoi1);
                        }

                        else {
                            system ("cls");
                            printf ("Ban doan trung so bi mat roi, thuong ban 100.000VND !!!\n");
                            printf ("So bi mat ban doan la: %d\n", soBiMat);
                            printf ("So lan ban doan sai: %d\n", dem);
                            printf ("Bam Enter de tiep tuc\n");
                            system ("pause");
                            break;
                        }
                    }
                
                } //ket thuc game 2

                //game 3
                else {
                    
                    system ("cls");
                    dem = 0;
                    soBiMat = (rand() % 1001) + 1;

                    printf ("Moi ban nhap so: ");
                    scanf ("%d", &nguoiChoi1);

                    for (; ; dem++) {
                        if (nguoiChoi1 > soBiMat ) {
                            system ("cls");
                            printf ("Lon hon, nhap lai: ");
                            scanf ("%d", &nguoiChoi1);
                        }

                        else if (nguoiChoi1 < soBiMat) {
                            system ("cls");
                            printf ("Nho hon, nhap lai: ");
                            scanf ("%d", &nguoiChoi1);
                        }
                        else {
                            printf ("Ban doan trung so bi mat roi !!! Thuong ban 1.000.000VND\n");
                            printf ("So bi mat la: %d\n", soBiMat);
                            printf ("So lan ban doan sai: %d\n", dem);
                            printf ("Bem Enter de tiep tuc\n");
                            system ("pause");
                            break;
                        }
                    }

                } //ket thuc game 3
                
                system ("cls");
                printf ("1. Choi lai.\n");
                printf ("2. Thoat.\n");
                printf ("Lua chon cua ban: ");
                scanf ("%d", &luaChon);

                if (luaChon == 1) {
                    cheDo1 = 1;
                }

                else {
                    cheDo1 = 0;
                }

            } //ket thuc menu che do 1
            
        } //ket thuc che do 1

        //che do 2
        else if (luaChon == 2) {
            system ("cls");
            dem = 0;
                
            while (cheDo2) {
                system ("cls");
                printf ("Moi nguoi choi thu nhat nhap so: ");
                scanf ("%d", &nguoiChoi1);
                system ("cls");
                printf ("Moi nguoi choi thu hai doan so: ");
                scanf ("%d", &nguoiChoi2);

                for (; ; dem++) {
                    if (nguoiChoi2 > nguoiChoi1) {
                        system ("cls");
                        printf ("Lon hon, nhap lai: ");
                        scanf ("%d", &nguoiChoi2);
                    }

                    else if (nguoiChoi2 < nguoiChoi1) {
                        system ("cls");
                        printf ("Nho hon, nhap lai: ");
                        scanf ("%d", &nguoiChoi2);
                    }
                
                    else {
                        system ("cls");
                        printf ("Ban doan trung roi !!!\n");
                        printf ("So cua nguoi choi thu nhat la: %d\n", nguoiChoi1);
                        printf ("So lan ban doan sai: %d\n", dem);
                        printf ("Nhap Enter de tiep tuc\n");
                        system ("pause");
                        break;
                    }
                }
                system ("cls");
                printf ("1. Choi lai\n");
                printf ("2. Thoat\n");
                printf ("Lua chon cua ban: ");
                scanf ("%d", &luaChon);

                if (luaChon == 1) {
                    cheDo2 = 1;
                }

                else {
                    cheDo2 = 0;
                }
                
            }
            
        
        } //ket thuc che do 2

        else {
            game = 0;    
        }
    } //ket thu tro choi
}
