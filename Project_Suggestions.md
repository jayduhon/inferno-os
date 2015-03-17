As we think of them, we'll add to the following lists of helpful things to do.  If you are planning to attempt one, please join the [Inferno e-mail list](http://www.vitanuova.com/news/newsgroup.html) and discuss it there; if you are particularly earnest, you might even tag the project with your name here.

The mark (GW) stands for "Grunge Work".

First, some Q&A:

  * _Implementation languages?_
> Inferno kernel code and the supporting libraries are written in either fairly strict ANSI C (ie, no GNU extensions) or [Plan 9 C](http://plan9.bell-labs.com/sys/doc/comp.html), depending on target environment.

> Inferno applications are written in the [Limbo programming language](http://www.vitanuova.com/inferno/papers/limbo.html), possibly controlled by small scripts written in the [Inferno shell](http://www.vitanuova.com/inferno/papers/sh.html).

> Nearly all the projects below would be written in Limbo, so be prepared. Most would involve writing at least one [Styx](http://www.vitanuova.com/inferno/man/5/0intro.html) file server, which is well-supported by either [system calls](http://www.vitanuova.com/inferno/man/2/sys-file2chan.html) or [library modules](http://www.vitanuova.com/inferno/man/2/styxservers.html).

  * _Style?_
> It's much easier for us if it follows the style of most of the existing code in our tree.

> For background, see [Rob Pike's comments](http://www.lysator.liu.se/c/pikestyle.html) or [The Practice of Programming](http://cm.bell-labs.com/cm/cs/tpop/), and [Russ Cox's more recent ones](http://swtch.com/~rsc/worknotes/) for programming projects; they give the gist. We maintain a similar style for Limbo.

  * _Licence?_
> We expect the projects would use an MIT-style licence, except for minor modifications made to existing code covered by the LGPL or GPL.

  * _Distribution?_
> During development, there should be a reasonably current copy of your work in a project on Google Code. On completion, we'd hope to add the code to the Inferno distribution.

## Summer-sized projects ##

The projects below are often (potentially) quite large. For Google's [Summer of Code](http://code.google.com/soc/) we have found that it is best to have small, focused projects that can be done in weeks. The time just flies. The best projects are modular, and open-ended, so that if work goes to plan, more can be added, but if there's a hitch, you can still have a complete, interesting and working project.

We have labelled those we think might work — perhaps with restrictions — with "_**GSoC**_".

You should also check the separate sets of pages for [General Plan 9 projects](http://plan9.bell-labs.com/wiki/plan9/TODO/index.html) and [GSoC 2014 projects for Plan 9, Inferno and other related software](http://www.plan9.bell-labs.com/wiki/plan9/gsoc-2014-ideas/index.html).

## Projects ##

These are our own suggestions: feel free to offer ideas of your own. [The Inferno Programmer's Notebook](http://ipn.caerwyn.com/) might give you an idea.

Several of these projects are big enough to be split up.

  * _Quick ideas_ (_**GSoC**_)
> Project areas that seem interesting but for which we have not (yet) provided details:
    * Sound (eg, music-related)
    * Data display, perhaps influenced by ideas of [Edward Tufte](http://www.edwardtufte.com) and others.
    * A Styx/9P client implementation in JavaScript, ideally running in all browsers, and used to implement some non-trivial and useful applications.
    * Zeroconf (see below).
    * Styx/9P access to host system resources, such as services or devices (see below).
    * A Dis interpreter that runs in a browser (eg, in JavaScript or Dart)
    * Write a distributed application using one or more Inferno file servers to simplify implementation.

  * _OpenGL_ (_**GSoC**_)
> Give hosted Inferno a basic interface to OpenGL or OpenVG on a Linux or MacOS host. _Basic_ means a small subset of OpenGL or OpenVG, to test ideas and keep the project manageable. Ideally, unlike most OpenGL interfaces, this one would use novelties such as _data structures_. It could be either a module interface, or a name space, or a module interface to a name space (in the style of _draw_(2)). For GSoC, best to keep it small and basic, but enough to draw some interesting or amusing things.

  * _Personal Naming Scheme_
> An MIT paper (http://pdos.csail.mit.edu/papers/uia:osdi06-abs.html) describes a scheme for an _Unmanaged Internet Architecture_ based on grouping and secure exchange of personal names for resources, including working through NAT layers. This decentralised approach seems attractive to play with in Inferno.  The task is to implement agreed parts of the paper, including its routing method (which might be more generally useful), probably using file server interfaces to many of the services, and seeing what existing parts of Inferno can help, and which other parts can be changed or extended to simplify the implementation.

  * _JavaScript outside_
> There is an ECMAscript implementation in the Limbo library, and it is currently used only by the browser Charon. It implements (or is intended to implement) all of ECMAscript, but the language defined by the standard is intended for use in many environments and does not specify all that people take to be JavaScript. For instance, it does not provide DOM (which comes as a shock to most JavaScript that is loaded by Charon, so less and less works these days). The task is: ensure the language implements the current ECMAscript standard; add support for the JavaScript objects/libraries; and make the module available as a standalone general-purpose language under Inferno. It would be nice to re-attach it to the browser Charon, but that is suspected to be fairly hard in the time available. There should, however, be ways to access the Inferno environment.

  * _Restrained colour_
> "Selecting harmonious colours for traditional window systems can be a difficult and frustrating endeavour." Indeed many window systems look unpleasant to me. A thesis by MacIntyre (http://www.cs.uwaterloo.ca/research/tr/1991/55/tech.pdf) has been on my<sup>1</sup> shelf for quite some time. It describes a scheme for colour constraints to be used to control dynamic colour choice by a user interface automatically. I am interested in seeing how well it works in practice in the Inferno environment. I supposed it might be implemented as an Inferno service that could be used directly by graphics applications or indirectly through Tk (eg, a given packing would access the solver). The hope is to apply it to existing applications, with it able to be used by default. Badros (http://citeseer.ist.psu.edu/badros00extending.html) describes a more general use of constraints in interactive systems that might be worth considering too. The project would start with a little survey to see what else that is relevant might have been done since then, but of course this is primarily an implementation project.  <sup>1</sup>_charles.forsyth@gmail.com_

  * _Ventilator_ (_**GSoC**_)
> [Venti](http://plan9.bell-labs.com/sys/doc/venti.html) is a [Plan 9](http://plan9.bell-labs.com/plan9/) archival data service. It would be useful for Inferno to have a simple file system implementation that uses an existing Venti for its archive and initial state:
    * it would have a basic implementation (Plan 9's own [Fossil](http://plan9.bell-labs.com/magic/man2html/4/fossil) is fairly complicated, at least for a summer project, and in retrospect has some limitations)
    * it could store file system metadata and data locally (and optionally separately)
    * it would allow disconnected operation
    * it could be fairly slow (doesn't matter at this point)

  * _Distiller_
> Design a tree-based internal form for a program, almost certainly typed and perhaps related to the one used by the [Limbo](http://www.vitanuova.com/inferno/papers/limbo.html) compiler, and write a Limbo module that translates it to a [Dis module](http://www.vitanuova.com/inferno/papers/dis.html) at run-time (but also allowing the results to be filed).

  * _Inferno as a plug-in for Firefox\_or Chrome_
    * See http://code.google.com/p/inferno-plugin/ for the existing IE plugin, and the Links there for further details). This is hard.
    * Easier might be a plug-in for any suitable browser that makes things inside the browser available on a Styx/9P connection. That _might_ even include access to its user interface (that is probably hard, if only because a suitable programming interface would need to be designed as well as implemented).

## Infrastructure ##

  * _TLS/SSL3.0_ (_**GSoC**_)
> `/appl/lib/crypt/ssl3.b` has an implementation of SSL3(TLS), `/appl/lib/crypt/sslsession.b` implements some form of SSL session cache, and `/*/port/devtls.c` has support for the record structure and control operations of SSL3 (but ssl3.b doesn't use it).  Check ssl3.b etc. against the specification, and change it to suit. You might also need to change x509.b. (GW)

  * _64 bit Inferno_
> The Inferno kernels could be modified in a similar way as Plan 9 to run on 64-bit architectures, but could only run 32-bit Dis; a 64-bit variant of Dis would be needed to make full use of 64-bit address spaces.

  * _Open GL support_

  * _Zeroconf_ (_**GSoC**_)
> [Zeroconf](http://en.wikipedia.org/wiki/Zeroconf) support/mapping within Inferno, probably hooked into [ndb/cs](http://www.vitanuova.com/inferno/man/8/cs.html) and/or [ndb/registry](http://www.vitanuova.com/inferno/man/4/registry.html)

  * _Access to host's devices_ (_**GSoC**_)
> Better support for importing more eccentric devices from the hosted system - ie. video (from camera and/or video capture), tablet/pen controls w/pressure sensitivity, 3D mice, etc.; and then write Inferno applications to use them. The easiest way to implement hosted devices is to write separate host programs that serve a name space using 9P, which can then be mounted by an Inferno instance. (This is likely to be the way we implement future graphics and audio subsystems, for instance.)

## Applications ##

  * _Google APIs_ (_**GSoC**_)
> Write file servers or modules to give access to some of the more interesting [Google APIs](http://code.google.com/apis/), where "more interesting" means you also write a useful and/or amusing application that uses the API(s) just implemented.

  * _AWS APIs_ (_**GSoC**_)
> Write file servers or modules to give access to the [Amazon Web Services APIs](http://aws.amazon.com/), and write a useful and/or amusing application that uses them.

  * _httpd_ (_**GSoC**_)
> Modify one of the httpd implementations to allow a process (or a set of processes) to maintain state for a logical http session, so the server-side application is written as a (fairly) normal process. Write some useful applications.

  * _Charon_
    * Add CSS support to the web browser [Charon](http://www.vitanuova.com/inferno/man/1/charon.html) (_not_ a GSoC project)
    * Convert the layout/output code into a (more) general library module for other programs.
    * Finish the implementation of HTTP/1.1, in particular fetching several things on a single connection.

  * _Acme_ ([A User Interface for Programmers](http://plan9.bell-labs.com/sys/doc/acme.pdf))
> Write some more Acme clients, for instance ...
    * a client for [Google gtags](http://google-code-updates.blogspot.com/2007/03/google-gtags-version-10.html)
    * clients to access other Google services (see Google APIs above)

  * _PDF_
> Write a PDF viewer(!).

## Ports ##

There are various potential targets for Inferno ports, either hosted, or native, or both.
Native ports are almost always unsuitable for Summer of Code projects, although hosted ones are plausible. Here are some that various people have suggested. If you are interested, drop a line to the email address above and your message will be forwarded to the person who originally expressed interest.  All of the native ports assume access to suitable hardware.

  * _Hypervisors_
> Native support for hypervisors (eg, Xen, PAPR, KVM, ...), or a virtual machine.

> Native Inferno running in the same controlling environment as User Mode Linux. (The rationale is that some server companies offer virtual Linux environments based on UML that could boot User Mode Native Inferno instead.)

## Packaging ##

Packaging is often the ugly duckling of software (not just free software). That's because what you have to do usually _is_ ugly.

  * _.deb/.rpm/ebuild packaging for Linux distributions_ (GW)
> As with some other large packages, this would probably involve producing several packages, each corresponding to particular functionality (eg, a base set, hosted vs native, graphics and wm, supporting tools). For instance, those who just want to serve resources shouldn't need to install a big tree of unused material.
> The Vita Nuova distribution is actually built from some subpackages (inferno, src, os, utils) but those were not intended to form the basis for a shipped application. The grid scheduler client, for instance, uses a stripped-down Inferno for each client.
> Once we have something that we like, we can try to have it adopted by the distributions.