//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override_Host : NSObject
{
    NSMutableArray *_overrides;	// 8 = 0x8
    UIResponder *_owner;	// 16 = 0x10
}

+ (id)hostForResponder:(id)arg1;	// IMP=0x0060000000e5be7f
- (void).cxx_destruct;	// IMP=0x0000000000e5c847
@property(readonly, nonatomic) __weak UIResponder *owner; // @synthesize owner=_owner;
- (id)description;	// IMP=0x0000000000e5c78e
- (long long)typesForResponder:(id)arg1;	// IMP=0x0000000000e5c5ea
- (void)detachOverrider:(id)arg1 forTypes:(long long)arg2;	// IMP=0x0000000000e5c338
- (void)attachOverrider:(id)arg1 forTypes:(long long)arg2;	// IMP=0x0000000000e5c201
- (void)dealloc;	// IMP=0x0000000000e5bf2f
- (id)init;	// IMP=0x0000000000e5bec9

@end

