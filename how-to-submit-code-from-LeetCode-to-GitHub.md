# How to Submit Code from LeetCode to GitHub

A step-by-step guide to automatically push your LeetCode solutions to a GitHub repository using the **LeetHub** extension.

---

## Table of Contents
- [I. Tutorial](#i-tutorial)
  - [Step 1: Create a Repository](#step-1-create-a-repository)
  - [Step 2: Install LeetHub](#step-2-install-leethub)
  - [Step 3: Submit Code from LeetCode](#step-3-submit-code-from-leetcode)
- [II. Warning](#ii-warning)

---

## I. Tutorial

### Step 1: Create a Repository

First, create a new repository on GitHub to store your LeetCode solutions.

**1.1.** Go to your GitHub homepage and locate the repository section.

<p align="center">
  <img width="800" alt="GitHub homepage" src="images/submitcode/repo.png" />
</p>

**1.2.** Click **New** to start creating a repository.

<p align="center">
  <img width="800" alt="Click New repository" src="images/submitcode/new-repo.png" />
</p>

**1.3.** Fill in the repository name, description, add README, then click **Create repository**.

<p align="center">
  <img width="800" alt="Create repository form" src="images/submitcode/create-repo.png" />
</p>

---

### Step 2: Install LeetHub

LeetHub is a browser extension that automatically pushes your accepted LeetCode submissions to GitHub.

**2.1.** Search for **LeetHub** in the Chrome/Edge/FireFox Web Store and add it to your browser.

<p align="center">
  <img width="800" alt="Install LeetHub extension" src="images/submitcode/extension.png" />
</p>

**2.2.** Open the extension and click **Authenticate** to sign in with your GitHub account.

<p align="center">
  <img width="800" alt="Authenticate with GitHub" src="images/submitcode/authenticate.png" />
</p>

**2.3.** Link the extension to the repository you created in Step 1.

<p align="center">
  <img width="800" alt="Link repository to LeetHub" src="images/submitcode/linking.png" />
</p>

---

### Step 3: Submit Code from LeetCode

Once LeetHub is set up, every accepted submission can be pushed to GitHub automatically.

**3.1.** Solve a problem on LeetCode and click **Submit**.

<p align="center">
  <img width="800" alt="Submit code on LeetCode" src="images/submitcode/submit-code.png" />
</p>

> **Note:** Wait until the LeetHub icon shows a **green tick** — this confirms your code has been pushed to GitHub successfully.

<p align="center">
  <img width="800" alt="Wait for green tick" src="images/submitcode/wait-for-tick.png" />
</p>

**3.2.** Press **F5** to refresh your GitHub repository page and verify the new commit.

<p align="center">
  <img width="800" alt="Refresh GitHub to see commit" src="images/submitcode/f5-github.png" />
</p>

#### Customize Your Commit Message

You can edit the default commit message in the LeetHub extension settings to better describe your submissions.

<p align="center">
  <img width="800" alt="Customize commit message" src="images/submitcode/customize-commit-message.png" />
</p>

---

## II. Warning

> **Important:** Using **Chrome** may fail to upload the `README.md` file (including the problem description) to GitHub.
> **Edge is recommended** for full functionality.

| FireFox | Edge | Chrome |
| :---: | :---: | :---: |
| <img width="800" alt="Refresh GitHub to see commit" src="images/submitcode/f5-github.png" /> | <img width="800" alt="Refresh GitHub to see commit" src="images/submitcode/f5-github.png" /> | <img width="800" alt="Refresh GitHub to see commit" src="images/submitcode/f5-github.png" /> |
| Uploads code **and** README.md | Uploads code **and** README.md | Uploads code **only**, missing README.md |

---
