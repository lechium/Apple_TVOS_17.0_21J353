//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIArchiveItem.h"

__attribute__((visibility("hidden")))
@interface _UILibArchiveItem : _UIArchiveItem
{
    struct ui_archive_entry *_underlyingArchiveEntry;	// 8 = 0x8
    struct ui_archive *_underlyingArchive;	// 16 = 0x10
}

+ (id)itemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg1 archive:(struct ui_archive *)arg2;	// IMP=0x006000000064f36a
@property(readonly) struct ui_archive *underlyingArchive; // @synthesize underlyingArchive=_underlyingArchive;
@property(readonly) struct ui_archive_entry *underlyingArchiveEntry; // @synthesize underlyingArchiveEntry=_underlyingArchiveEntry;

@end

