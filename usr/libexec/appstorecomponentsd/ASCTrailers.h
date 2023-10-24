//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCMediaPlatform, NSArray;

@interface ASCTrailers : NSObject
{
    NSArray *_videos;	// 8 = 0x8
    ASCMediaPlatform *_mediaPlatform;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001b2f5
- (void).cxx_destruct;	// IMP=0x002000000001b8cb
@property(readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform; // @synthesize mediaPlatform=_mediaPlatform;
@property(readonly, copy, nonatomic) NSArray *videos; // @synthesize videos=_videos;
- (id)description;	// IMP=0x001000000001b7db
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001b638
- (unsigned long long)hash;	// IMP=0x001000000001b586
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001b57b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001b4cd
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001b2fd
- (id)initWithVideos:(id)arg1 mediaPlatform:(id)arg2;	// IMP=0x001000000001b230

@end

