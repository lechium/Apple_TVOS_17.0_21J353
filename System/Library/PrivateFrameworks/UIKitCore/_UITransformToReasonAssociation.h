//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITransform;

__attribute__((visibility("hidden")))
@interface _UITransformToReasonAssociation : NSObject
{
    UITransform *_transform;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

+ (id)association:(id)arg1 reason:(id)arg2;	// IMP=0x00600000007bc153
- (void).cxx_destruct;	// IMP=0x00000000007bc351
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) UITransform *transform; // @synthesize transform=_transform;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007bc2a6
- (unsigned long long)hash;	// IMP=0x00000000007bc25e
- (id)initWithTransform:(id)arg1 reason:(id)arg2;	// IMP=0x00000000007bc1c5

@end

