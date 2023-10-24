//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSImageElementHelper : NSObject
{
    double _deviceScale;	// 8 = 0x8
    long long _currentUserInterfaceStyle;	// 16 = 0x10
}

@property(nonatomic) long long currentUserInterfaceStyle; // @synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle;
@property(nonatomic) double deviceScale; // @synthesize deviceScale=_deviceScale;
- (id)keysForScale:(double)arg1 withSuffix:(id)arg2;	// IMP=0x0000000000051c20
- (id)matchingKeyForScale:(double)arg1 withSuffix:(id)arg2 inKeysSet:(id)arg3;	// IMP=0x0000000000051a7b
- (id)bestMatchingKeyForScale:(double)arg1 withSuffix:(id)arg2 inKeysSet:(id)arg3;	// IMP=0x00000000000519fa
- (id)bestMatchingKeyForSrcset:(id)arg1;	// IMP=0x0000000000051734
- (id)init;	// IMP=0x0000000000051677

@end

