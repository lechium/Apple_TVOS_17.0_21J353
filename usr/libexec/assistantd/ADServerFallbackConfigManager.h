//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIClient;
@protocol OS_dispatch_queue;

@interface ADServerFallbackConfigManager : NSObject
{
    TRIClient *_siriUnderstandingClient;	// 8 = 0x8
    _Bool _shouldDisableServerFallbackNL;	// 16 = 0x10
    _Bool _shouldDisableServerFallbackDomain;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _updateHandler;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000115ddb
- (void).cxx_destruct;	// IMP=0x0020000000115cad
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool shouldDisableServerFallbackDomain; // @synthesize shouldDisableServerFallbackDomain=_shouldDisableServerFallbackDomain;
@property(nonatomic) _Bool shouldDisableServerFallbackNL; // @synthesize shouldDisableServerFallbackNL=_shouldDisableServerFallbackNL;
- (_Bool)_shouldDisableServerFallbackABForDomainDirected:(_Bool)arg1;	// IMP=0x0010000000115afa
- (void)_populateConfiguration;	// IMP=0x0010000000115963
- (void)_registerUpdateHandler;	// IMP=0x001000000011581f
- (id)init;	// IMP=0x0010000000115701

@end

