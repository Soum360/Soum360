# inclure < stdio.h >
# inclure < unistd.h >
# inclure < sys/wait.h >
# inclure < errno.h >
int main ( int argc, char *argv[]){ 
int je ; pid_t pid[ 4 ] ; 
pour (je = 0 ; je < 4 ; je++){
 pid[i] = fourchette (); 
si (pid[i]< 0 ){ /* On gère l'erreur */
 fprintf (stderr, " Erreur lors de la création du fils( %d ) \n " , errno); 
retour 1 ; } 
si (pid[i] == 0 ){ /* Dans le fils */ 
fprintf (stdout, " Je suis ( %d ), mon père ( %d ) \n " , getpid (), getppid ()); 
casser ; 
} sinon { } 
} 
pour (je = 0 ; je < 4 ; je++){ 
état entier ; 
attendre (&statut); 
}
}
