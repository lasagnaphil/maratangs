# git과 github

- 기본적인 git 사용법을 숙지합니다.
- github를 사용해 협업하는 방법을 배워봅니다.
- 기본적인 마크다운 문법을 익혀봅시다.

## 과정

1. `maratangs` 저장소를 로컬에 클론합니다.
``` bash
git clone https://github.com/jeuxdeau/maratangs
```

2. 숙제 디렉토리로 이동합니다.
``` bash
cd maratangs/190615
```

3. `190615/woobin`처럼, **숙제가 나온 날짜**와 **자신의 이름**을 조합해서 브랜치를 만들고, 해당 브랜치로 이동합니다.
``` bash
git branch 190615/woobin
git checkout 190615/woobin

# 또는 브랜치를 만드는 동시에 브랜치로 이동할 수 있습니다.
git checkout -b 190615/woobin
```


4. 커밋 두 개를 만듭니다. [커밋 메시지 작성 규칙](https://djkeh.github.io/articles/How-to-write-a-git-commit-message-kor/)을 참고해 주세요.

### 4-1. 자기소개 마크다운 파일을 작성하고, 해당 파일만 `add`해서 커밋 한 개 만들기
- 파일 이름은 `markdown_[이름].md`
- [예시 문서](markdown_woobin.md)를 참고해서, 예시 문서에 있는 문법을 모두 적용해 봅니다.

#### 시도해 볼 만한 것들
- [ ] 단계별 제목 만들기
- [ ] 2단계 bullet (•) 목록 만들기
- [ ] **굵은 글씨**
- [ ] ~~취소선~~
- [ ] [하이퍼링크](https://ko.wikipedia.org/wiki/%ED%95%98%EC%9D%B4%ED%8D%BC%EB%A7%81%ED%81%AC) 넣기
- [ ] 이미지 삽입하기

### 4-2. 자신이 처음 써보는 언어로 hello world를 출력하는 프로그램을 작성하고, 해당 파일만 `add`해서 커밋 한 개 만들기
- 파일 이름은 `hello_[이름].[확장자]`

> 처음 커밋을 만들기 전 `git config --list`로 `user.name`과 `user.email`이 제대로 설정되어 있는지 확인해 보세요. `user.name`은 github username, `user.email`은 github에 등록한 이메일로 설정되어 있어야 합니다. 

``` bash
git config --global user.name [github username]
git config --global user.email [github email]


# 특정 저장소에만 특정 config를 지정하고 싶으면 --global 대신 --local 옵션을 주세요.
```

5. 브랜치를 원격 저장소에 푸시합니다.
``` bash
git push origin 190615/woobin
```

6. [원격 저장소](https://github.com/jeuxdeau/maratangs)에 접속해서 Pull Request를 만듭니다. base를 `master`로, 방금 만든 본인의 브랜치를 compare 브랜치로 지정합니다. [풀 리퀘스트 만드는 방법](https://github.com/jeuxdeau/maratangs/issues/3)을 참고해 보세요.

7-1. 리뷰어로 본인을 제외한 모두를 지정하고, 1명 이상에게서 `Approve`를 받아야 합니다.

7-2. 본인을 제외한 친구들의 PR에 대해서도 1번 이상 리뷰해 주세요.

8. 1명 이상 Approve를 받으면 이제 `master` 브랜치로 머지할 수 있습니다. `squash merging` 옵션을 선택해서 여러 개의 커밋이 하나의 커밋으로 스쿼시되게 합니다.

## 참고할만한 문서
- [마크다운 작성법](https://gist.github.com/ihoneymon/652be052a0727ad59601)
- [커밋 메시지 작성 규칙](https://djkeh.github.io/articles/How-to-write-a-git-commit-message-kor/)
- [풀 리퀘스트 만드는 방법](https://github.com/jeuxdeau/maratangs/issues/3)
- [merge commit, squash and merge, rebase and merge의 차이](https://meetup.toast.com/posts/122)
