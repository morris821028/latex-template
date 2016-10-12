RabinKarp(string s[1..n], string pattern[1..m])
  hpattern := hash(pattern[1..m]);  
  hs := hash(s[1..m])
  for i from 1 to n-m+1
    if hs = hpattern
      if s[i..i+m-1] = pattern[1..m]
        return i
    hs := hash(s[i+1..i+m])
  return not found