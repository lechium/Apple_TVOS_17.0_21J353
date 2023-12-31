//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HHAHubSwVersion : NSObject
{
    NSNumber *_majorVersion;	// 8 = 0x8
    NSNumber *_minorVersion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001667
@property(readonly, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
- (_Bool)isGreaterThanVersion:(id)arg1;	// IMP=0x0000000000001639
- (_Bool)isEqualToVersion:(id)arg1;	// IMP=0x0000000000001620
- (long long)compare:(id)arg1;	// IMP=0x00000000000014cf
- (id)description;	// IMP=0x000000000000148b
- (id)initWithAttributeDictionary:(id)arg1;	// IMP=0x0000000000001335

@end

