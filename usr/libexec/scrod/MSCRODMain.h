//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderCore/SCRCArgumentParser.h>

@class NSString, SCROHandler;

@interface MSCRODMain : SCRCArgumentParser
{
    SCROHandler *_handlers[3];	// 8 = 0x8
    struct __CFRunLoop **_runLoops;	// 32 = 0x20
    struct __CFRunLoop *_mainRunLoop;	// 40 = 0x28
    _Bool _stop;	// 48 = 0x30
}

+ (id)commandPath;	// IMP=0x0020000000002889
+ (id)versionString;	// IMP=0x001000000000287c
+ (id)processIdentifier;	// IMP=0x001000000000286f
- (void).cxx_destruct;	// IMP=0x0020000000003419
- (int)performActionForKey:(int)arg1 handlerType:(int)arg2 trusted:(_Bool)arg3;	// IMP=0x0010000000003323
- (int)getValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 handlerType:(int)arg4 trusted:(_Bool)arg5;	// IMP=0x00100000000031fd
- (int)getValue:(id *)arg1 forKey:(int)arg2 handlerType:(int)arg3 trusted:(_Bool)arg4;	// IMP=0x00100000000030f9
- (int)setValue:(id)arg1 forKey:(int)arg2 handlerType:(int)arg3 trusted:(_Bool)arg4;	// IMP=0x0010000000002fd7
- (int)registerCallbackForKey:(int)arg1 forClientIdentifier:(unsigned int)arg2 handlerType:(int)arg3 trusted:(_Bool)arg4;	// IMP=0x0010000000002ee0
- (int)handleEvent:(id)arg1 handlerType:(int)arg2 trusted:(_Bool)arg3;	// IMP=0x0010000000002dd2
- (void)handleCallback:(id)arg1;	// IMP=0x0010000000002db9
- (void)_serverTimeoutNotificationHandler:(id)arg1;	// IMP=0x0010000000002da7
- (void)stop;	// IMP=0x0010000000002cac
- (void)_goDogGo:(id)arg1;	// IMP=0x0010000000002b6b
- (int)run;	// IMP=0x00100000000028ba
- (id)_safeHandlerForType:(int *)arg1;	// IMP=0x0010000000002896
- (void)dealloc;	// IMP=0x0010000000002788
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;	// IMP=0x001000000000263c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

