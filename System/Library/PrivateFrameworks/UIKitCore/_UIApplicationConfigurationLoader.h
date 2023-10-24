//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISApplicationInitializationContext;

__attribute__((visibility("hidden")))
@interface _UIApplicationConfigurationLoader : NSObject
{
    UISApplicationInitializationContext *_applicationInitializationContext;	// 8 = 0x8
    _Atomic _Bool _hasRequestedPreload;	// 16 = 0x10
}

+ (id)sharedLoader;	// IMP=0x004000000091ff8b
- (void).cxx_destruct;	// IMP=0x00000000009205ed
@property(readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;
- (void)startPreloadInitializationContext;	// IMP=0x0000000000920466
- (id)_loadInitializationContext;	// IMP=0x000000000092022b
- (id)_appInitializationContextFactoryClass;	// IMP=0x000000000092016a
@property(readonly, nonatomic) _Bool usesLocalInitializationContext;
@property(readonly, nonatomic) _Bool isFrontBoard;
- (void)dealloc;	// IMP=0x0000000000920041
- (id)_init;	// IMP=0x0000000000920012

@end
