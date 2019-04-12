# git branch, git flow
### 2019-04-10

## What is branch?

- 분기점을 생성하고 독립적으로 코드를 변경할 수 있도록 도와주는 모델

## Process  
(master branch)
```
$ git branch
$ git checkout stem
```

(stem branch)

```
(do some works)
$ git add .
$ git commit
$ git push -u origin stem
$ git checkout master
```

(master branch)
```
$ git merge stem
$ git branch -D stem
```

### git flow
[git flow cheatsheet](https://danielkummer.github.io/git-flow-cheatsheet/index.ko_KR.html)
