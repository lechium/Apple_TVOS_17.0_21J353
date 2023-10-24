//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PBMRSupportedCommandsTransaction
{
    NSArray *_supportedCommands;	// 8 = 0x8
    void *_playerPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006dec5
@property(readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
- (void)_receiveSupportedCommands:(id)arg1 error:(id)arg2;	// IMP=0x001000000006de0a
- (_Bool)shouldWatchdog:(id *)arg1;	// IMP=0x001000000006de02
- (void)_begin;	// IMP=0x001000000006dc61
- (_Bool)_canBeInterrupted;	// IMP=0x001000000006dc59
- (void)dealloc;	// IMP=0x001000000006dc18
- (id)initWithPlayerPath:(void *)arg1;	// IMP=0x000000000006dbb8
- (id)initWithClient:(id)arg1 playerPath:(void *)arg2;	// IMP=0x001000000006db31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

