# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    banner.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 09:57:34 by chhoflac          #+#    #+#              #
#    Updated: 2025/07/04 18:19:16 by chhoflac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


mode=$(echo "$1" | tr a-z A-Z)
cols=$(tput cols 2>/dev/null || echo 80)


ascii_txt=(
	"_______________  ______________"
	"\__    ___/\   \/  /\__    ___/"
	"  |    |    \     /   |    |   "
	"  |    |    /     \   |    |   "
	"  |____|   /___/\  \  |____|   "
	"                 \_/           "
)

ascii_csv=(
	"_________   _____________   ____"
	"\_   ___ \ /   _____/\   \ /   /"
	"/    \  \/ \_____  \  \   Y   / "
	"\     \____/        \  \     /  "
	" \______  /_______  /   \___/   "
	"        \/        \/            "
)

ascii_default=(
	"=====default mode====="
)

# Choix selon mode
case "$mode" in
  TXT)         art=("${ascii_txt[@]}") ;;
  CSV)         art=("${ascii_csv[@]}") ;;
esac


# Affichage centré
echo ""
for line in "${art[@]}"; do
  padding=$(( (cols - ${#line}) / 2 ))
  printf "%*s%s\n" "$padding" "" "$line"
done
echo ""
