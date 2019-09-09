/*enter a character :a
 vowel
exp ==>a,e,i,o,u ==>vowel
    ==>bahek ma ==>consonent
    ==> alphabet==> is not a alphabet*/
    #include<stdio.h>
void main()
{
    char a;
   printf("Enter a character : ");
   scanf(" %c",&a);
   switch (a)
   {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
     printf("the character is vowel");
     break;
    case 'b':
     case 'c':
      case 'd':
       case 'f':
        case 'g':
     case 'h':
      case 'j':
        case  'k':
         case 'l':
          case 'm':
           case 'n':
            case 'p':
             case 'q':
              case 'r':
               case 's':
                case 't':
                 case 'v':
                  case 'w':
                   case 'x':
                    case 'y':
                     case 'z':

     printf("the character is consonent");
     break;
                     default:
                        printf("the input is not an alphabet");


   }

}










