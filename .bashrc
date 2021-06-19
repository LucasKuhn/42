export LS_OPTIONS='--color=auto'
export GEM_HOME=/usr/local/bundle
export PATH=/usr/local/bundle/bin:/usr/local/bundle/gems/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
eval "`dircolors`"
alias ls='ls $LS_OPTIONS'
alias ll='ls $LS_OPTIONS -l'
alias l='ls $LS_OPTIONS -lA'
alias basecamp='bash ${HOME}/.basecamp/basecamp'
alias tt='gcc -Wall -Wextra -Werror ~/joaonette/$LIST/`basename $PWD`/*.c *.c'

alias norma='norminette -R CheckForbiddenSourceHeader'
alias compile='cc -Wall -Wextra -Werror -lbsd ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/*.c *.c'
alias compare='diff <(./a.out) ~/joaonette/$(basename $(dirname $PWD))/$(basename $PWD)/expected_output'
alias test_all='bash ~/joaonette/test_all.sh'
alias run_all='bash ~/joaonette/run_all.sh'
alias joaonette='bash ~/joaonette/joaonette.sh'
alias jeannette='bash ~/jeannette/jeannette.sh'
alias fakenette='bash ~/fakenette/fakenette.sh'

export http_proxy=10.3.57.01:3128
export https_proxy=10.3.57.01:3128