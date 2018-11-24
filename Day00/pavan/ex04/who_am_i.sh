ldapwhoami -Q | cut -d ':' -f2 | sed 's/,ou=august//'| sed 's/,dc=org//'
