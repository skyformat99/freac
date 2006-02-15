 /* BonkEnc Audio Encoder
  * Copyright (C) 2001-2006 Robert Kausch <robert.kausch@bonkenc.org>
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the "GNU General Public License".
  *
  * THIS PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
  * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. */

#ifndef _H_CDDBINFO_
#define _H_CDDBINFO_

#include <smooth.h>

using namespace smooth;

namespace BonkEnc
{
	class BEEXPORT CDDBInfo
	{
		public:
			String		 category;
			Int		 discID;
			Int		 revision;

			Array<Int>	 trackOffsets;
			Int		 discLength;

			String		 dArtist;
			String		 dTitle;
			Int		 dYear;
			String		 dGenre;
			String		 comment;
			String		 playOrder;

			Array<String>	 trackArtists;
			Array<String>	 trackTitles;
			Array<String>	 trackComments;

			String		 DiscIDToString();
	};
};

#endif
