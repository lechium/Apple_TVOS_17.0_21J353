//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, UIScreen;

__attribute__((visibility("hidden")))
@interface UIKBGraphCache : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
    NSMutableDictionary *_graphCache;	// 16 = 0x10
}

+ (id)graphCacheForScreen:(id)arg1;	// IMP=0x0010000000a92720
- (void).cxx_destruct;	// IMP=0x0000000000a9279b
@property(readonly, nonatomic) NSMutableDictionary *graphCache; // @synthesize graphCache=_graphCache;
@property(readonly) NSDictionary *_options;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x0000000000a92710
@property(readonly) UIScreen *_intendedScreen;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x0000000000a92668

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

