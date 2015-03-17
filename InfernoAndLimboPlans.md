Here are initial lists of some changes and additions planned for Inferno and Limbo. We'll add to it shortly from an extensive To Do list, and add some detail to existing entries. The ordering in the lists is currently arbitrary.

# Inferno #

The following are quite likely to be done:
  * new authentication implementation (currently in progress)
  * better scheduling for Limbo/Dis processes
  * replacement for Dis (possibly to be used alongside Dis)
  * more efficient code for Limbo programs, either from Dis or more likely its replacement
  * a way of running C support code without as much risk
  * improved graphics
  * alternative schemes for user interfaces (otherwise known as _the bottomless pit_)
  * 64 bit
  * …

# Limbo #

The following is a mixture of both possible and probable changes to the Limbo language, currently listed in no particular order:
  * first-class functions
  * modules able to add adt fields (to allow a form of incomplete or opaque type)
  * dynamic types
  * better support for type parameters, including allowing non-reference types
  * load operator raises exception on failure (instead of returning nil)
  * …

# Dis #

Limbo programs could be compiled into a type-safe form as an alternative to Dis, or a replacement. Compared to Dis, that form can both be checked quickly by a recipient and converted to more efficient code more easily. There is nothing to stop that form being converted to Dis.

Java implementations try to check a program using the byte codes, working out the type system of the source program, and also coalesce byte code sequences in order to generate code on the fly. Both actions reconstruct a high-level form from a low-level form. It's much easier to transmit a representation of a program in high-level form, check it, and compile good code. TDF ("Ten-15 Distribution Format") is one ambitious variant of this idea, intended for use by several languages; Franz and Kistler's "Slim Binaries" for Oberon had a rather different approach with clever implementation ideas, producing a compact and effective encoding.

# Ports #

It would be nice to have
  * up-to-date native ports for an up-to-date platform that's reasonably stable
  * packages for Debian/Ubuntu (the PPA system looks promising)
  * ...
