//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PBSystemGestureCompatibilityShim : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSSet *_handles;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000df5e4
@property(readonly, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithAppDelegate:(id)arg1;	// IMP=0x00100000000df1e7

@end

