//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, NSString;

@interface DMDiphoneOSAppLifeCycle
{
    NSProgress *_proxyProgress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000257b0
@property(retain, nonatomic) NSProgress *proxyProgress; // @synthesize proxyProgress=_proxyProgress;
- (void)_findProxyInProxies:(id)arg1 andCallBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000254fa
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00100000000251e1
- (void)applicationsDidFailToUninstall:(id)arg1;	// IMP=0x0010000000025015
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x0010000000024cfc
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000002480c
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x001000000002442b
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x00100000000241a6
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x0010000000023f2c
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x0010000000023cb2
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x0010000000023a38
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x00100000000234ba
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x001000000002322f
- (id)progress;	// IMP=0x001000000002321d
- (void)dealloc;	// IMP=0x00100000000231a8
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000022c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

