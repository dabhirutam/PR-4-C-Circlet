#include <stdio.h>

main()
{

    int r, c, s;

    for (r = 1; r <= 1;)
    {
        // A loop
        for (r = 1; r <= 7; r++)
        {

            if (r == 1 || r == 3)
            {

                for (c = 1; c <= 3; c++)
                {

                    printf("* ");
                }
            }

            for (c = 1; c < 2; c++)
            {

                printf("* ");

                for (s = 1; s <= 3; s++)
                {
                    if (r == 1 || r == 3)
                    {
                        continue;
                    }
                    printf("  ");
                }
            }

            printf("* ");

            printf("\n");
        }

        // L loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            printf("* ");

            for (c = 1; c <= 4; c++)
            {
                if (r != 7)
                {
                    continue;
                }
                printf("* ");
            }

            for (s = 1; s <= 4; s++)
            {
                if (r == 7)
                {
                    continue;
                }
                printf("  ", r);
            }

            printf("\n");
        }

        // L loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            printf("* ");

            for (c = 1; c <= 4; c++)
            {
                if (r != 7)
                {
                    continue;
                }
                printf("* ");
            }

            for (s = 1; s <= 4; s++)
            {
                if (r == 7)
                {
                    continue;
                }
                printf("  ", r);
            }

            printf("\n");
        }

        // T loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            for (c = 1; c <= 5; c++)
            {
                if (r != 1)
                {
                    continue;
                }
                printf("* ");
            }

            if (r != 1)
            {
                for (s = 1; s <= 2; s++)
                {
                    printf("  ");
                }

                printf("* ");
            }

            printf("\n");
        }

        // H loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            printf("* ");

            for (c = 1; c <= 3; c++)
            {
                if (r == 4)
                {
                    continue;
                }
                printf("  ");
            }

            if (r == 4)
            {
                for (c = 1; c <= 3; c++)
                {
                    printf("* ");
                }
            }

            printf("* ");

            printf("\n");
        }

        // E loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            printf("* ");

            for (c = 1; c <= 4; c++)
            {
                if (r == 1 || r == 4 || r == 7)
                {
                    printf("* ");
                }
            }

            printf("\n");
        }

        // B loop
        printf("\n\n\n");
        for (r = 1; r <= 4; r++)
        {

            printf("* ");

            for (c = 1; c <= 2; c++)
            {
                if (r == 1 || r == 4 || r == 7)
                {
                    printf("* ");
                }
            }

            if (r != 1 && r != 4 && r != 7)
            {
                for (s = 5; s >= r; s--)
                {
                    if (s > 4)
                    {
                        continue;
                    }
                    printf("  ");
                }
                printf("* ");
            }

            printf("\n");
        }

        for (r = 4; r >= 1; r--)
        {

            if (r == 4)
            {
                continue;
            }

            printf("* ");

            for (c = 1; c <= 2; c++)
            {
                if (r == 1 || r == 4 || r == 7)
                {
                    printf("* ");
                }
            }

            if (r != 1 && r != 4 && r != 7)
            {
                for (s = 5; s >= r; s--)
                {
                    if (s > 4)
                    {
                        continue;
                    }
                    printf("  ");
                }
                printf("* ");
            }

            printf("\n");
        }

        // E loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            printf("* ");

            for (c = 1; c <= 4; c++)
            {
                if (r == 1 || r == 4 || r == 7)
                {
                    printf("* ");
                }
            }

            printf("\n");
        }

        // S loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            if (r != 5 && r != 6)
            {
                printf("* ");
            }

            for (c = 1; c <= 4; c++)
            {
                if (r == 1 || r == 4 || r == 7)
                {
                    printf("* ");
                }
            }

            if (r == 5 || r == 6)
            {
                for (s = 1; s <= 4; s++)
                {
                    printf("  ");
                }
                if (r == 5 || r == 6)
                {
                    printf("* ");
                }
            }

            printf("\n");
        }

        // T loop
        printf("\n\n\n");
        for (r = 1; r <= 7; r++)
        {

            for (c = 1; c <= 5; c++)
            {
                if (r != 1)
                {
                    continue;
                }
                printf("* ");
            }

            if (r != 1)
            {
                for (s = 1; s <= 2; s++)
                {
                    printf("  ");
                }

                printf("* ");
            }

            printf("\n");
        }
    }
}