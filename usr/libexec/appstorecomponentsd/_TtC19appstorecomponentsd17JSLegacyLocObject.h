//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC19appstorecomponentsd17JSLegacyLocObject : NSObject
{
    MISSING_TYPE *localizer;	// 8 = 0x8
    MISSING_TYPE *locale;	// 0 = 0x0
    MISSING_TYPE *localeWithCalendar;	// 0 = 0x0
    MISSING_TYPE *localeWithCalendarWithBagFixUp;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000095a40
- (id)init;	// IMP=0x0010000000095a00
- (id)relativeDate:(id)arg1;	// IMP=0x00100000000958f0
- (id)formatDateInSentence:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x00100000000951c0
- (id)formatDate:(id)arg1:(id)arg2;	// IMP=0x0010000000094e10
- (id)timeAgo:(id)arg1;	// IMP=0x0010000000094df0
- (id)formattedCount:(id)arg1;	// IMP=0x00100000000945f0
- (id)fileSize:(id)arg1;	// IMP=0x0010000000094440
- (id)decimal:(id)arg1:(long long)arg2;	// IMP=0x00100000000943b0
- (id)stringWithCounts:(id)arg1:(id)arg2;	// IMP=0x0010000000094120
- (id)stringWithCount:(id)arg1:(long long)arg2;	// IMP=0x0000000000093e70
- (id)string:(id)arg1;	// IMP=0x0010000000093e50
@property(nonatomic, readonly) NSString *arcadeWordmarkAssetName;
@property(nonatomic, readonly) NSString *identifier;

@end

