# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    average.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 19:03:18 by vmoreau           #+#    #+#              #
#    Updated: 2021/04/17 20:05:20 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

if [ $# -eq 2 ]
then
	if [ "$1" -eq "$1" ] 2> /dev/null && [ "$2" -eq "$2" ] 2> /dev/null
	then
		i=0
		moy=0
		ko=0
		while [ "$i" != "$2" ]
		do
			ARG=$(./genstack.pl $1 -$1 $1 )
			moy=$((moy+$(./push_swap $ARG | wc -l)))
			if [ $(./push_swap $ARG | ./checker $ARG) ] && [ $(./push_swap $ARG | ./checker $ARG) = "KO" ]
			then
				ko=$((ko+1))
			fi
			i=$((i+1))
			echo -n "\033[32m█"
		done
	echo "\nDone\033[0m"
	moy=$((moy/$2))
	s=""
		if [ "$moy" -gt 1 ]
		then
			s="s"
		fi
	echo "You made \033[34m$moy\033[0m action$s average and \033[34m$ko\033[0m KO"
	else
		echo "Integer arguments only"
	fi
else
	echo "Wrong input: sh average.sh [Size of List tested] [Number of test to do]"
fi
