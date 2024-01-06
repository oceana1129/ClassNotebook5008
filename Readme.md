# Class Notebook

This repository contains code worked on during class sessions/live sessions, or other code randomly created throughout the class.

You are encouraged to either clone this repo, or even better `fork` this repo, so you can make changes and save them to your own GitHub account. You can then merge any additional changes as this repo grows throughout the semester while keeping your changes / notes / additions intact. 

Another way to look at this. Think of this repo as living notebook that you can adjust as you want. You can add your own notes, code, etc. and keep it all in one place.

## Step 1: Set Up You Initial Fork

1. Go to the [ClassNotebook](https://github.com/Sp24-CS5008-Online-Lionelle/ClassNotebook)
2. On the top right, click the `Fork` button. This will create a copy of the repo in your own GitHub account. 
   * You are free to rename the repo to whatever you want, for example `CS5008-Notes_Examples`
   * Click create fork when finished.
3. You should now have a copy of this repo in your own GitHub account.
4. Clone the repo to your local machine. 
   * Click the green `Code` button on the top right.
   * Copy the link 
   * In your terminal, navigate to the folder you want to clone the repo to.
   * Run `git clone <link>` where `<link>` is the link you copied from GitHub.


## Step 2: Setting the Upstream

1. In your terminal, navigate to the folder you cloned the repo to.
2. Run `git remote add upstream https://github.com/Sp24-CS5008-Online-Lionelle/ClassNotebook`


This pairs the repo both with your local copy, and the original repo. This will allow you to pull any changes made to the original repo, and merge them with your own changes.


## Step 3: Pulling Changes
If we change the repo in class, you may want to pull changes into the repository. To do this, you can run the following command:

```bash
git fetch upstream
```

This looks at the original repo, and pulls any changes into your local copy. You can then push those changes to your own GitHub account. You also should ideally merge those changes into your own repo. You do this by running:

```bash
git merge upstream/main
```


## Keeping your own repo up to date

As you make changes, don't forget to commit and push them to your own GitHub account. 

```bash
git add *
git commit -m "your message here"
git push origin main
```


## Want to add to the upstream?
I am still debating if we all want to keep the upstream updated or not. Let's talk about it, but in general, you submit a pull request, and a TA or myself will review the changes before they get merged into the main class repo. As such, you should feel safe doing it, as we will review the changes before they get merged in.

If we do end up doing that, you create a pull request by doing the following:

1. Make sure you have the latest version of the upstream merged into your own repo.
2. Commit your changes to your own repo.
3. Follow these [instructions on github](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request-from-a-fork)
4. Tag a TA or myself to [review](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/requesting-a-pull-request-review) the changes, so we can merge them. 