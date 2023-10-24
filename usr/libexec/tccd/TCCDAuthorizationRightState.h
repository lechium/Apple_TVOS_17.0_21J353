//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TCCDAuthorizationRightState : NSObject
{
    unsigned long long _right;	// 8 = 0x8
    unsigned long long _reason;	// 16 = 0x10
}

@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long right; // @synthesize right=_right;
- (void)reset;	// IMP=0x001000000001ed02
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *reasonDescription;
@property(readonly, copy) NSString *rightDescription;
- (id)init;	// IMP=0x001000000001ebad

@end

