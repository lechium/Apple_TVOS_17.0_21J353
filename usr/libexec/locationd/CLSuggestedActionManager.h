//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@interface CLSuggestedActionManager : CLIntersiloService
{
}

+ (id)getSilo;	// IMP=0x0010000000629216
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006291fd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006291a0
+ (_Bool)isSupported;	// IMP=0x0010000000628f65
- (void)endService;	// IMP=0x0040000000629309
- (void)beginService;	// IMP=0x00100000006292de
- (void)dealloc;	// IMP=0x00100000006292af
- (id)init;	// IMP=0x0010000000629272

@end

