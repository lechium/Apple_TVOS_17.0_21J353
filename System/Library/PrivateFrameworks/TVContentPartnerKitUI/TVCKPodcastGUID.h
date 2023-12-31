//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVCKPodcastGUID : NSObject
{
    NSString *_guid;	// 8 = 0x8
    NSString *_episodeURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000022036
- (void).cxx_destruct;	// IMP=0x0000000000022345
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022291
- (id)description;	// IMP=0x0000000000022264
@property(readonly, nonatomic) NSString *stringValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002203e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021eea
- (id)initWithGUID:(id)arg1 episodeURL:(id)arg2;	// IMP=0x0000000000021e31
- (id)init;	// IMP=0x0000000000021e23

@end

