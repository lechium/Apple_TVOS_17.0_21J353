//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FAFamilyPhotoCache : NSObject
{
    NSString *_altDSID;	// 8 = 0x8
}

+ (id)cacheQueue;	// IMP=0x004000000001679a
- (void).cxx_destruct;	// IMP=0x0020000000017947
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)invalidateFamilyPhotos;	// IMP=0x0010000000017685
- (id)updateWithData:(id)arg1;	// IMP=0x0010000000017232
- (id)_createCacheFile;	// IMP=0x001000000001703e
- (id)_cacheURL;	// IMP=0x0010000000016f4a
- (_Bool)_isCacheDate:(id)arg1 pastDuration:(double)arg2;	// IMP=0x0010000000016dcb
- (id)load:(id *)arg1;	// IMP=0x0010000000016bed
- (id)load;	// IMP=0x0010000000016af9
- (id)_fetchData:(id *)arg1;	// IMP=0x001000000001681b
- (id)_cacheURLWithError:(id *)arg1;	// IMP=0x00100000000166d6
- (id)_cacheDirectoryURLWithError:(id *)arg1;	// IMP=0x0010000000016586
- (id)initWithAltDSID:(id)arg1;	// IMP=0x001000000001651b

@end

