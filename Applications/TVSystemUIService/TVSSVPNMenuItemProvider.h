//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVSSNetworkController;

@interface TVSSVPNMenuItemProvider
{
    TVSSNetworkController *_networkController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000034a60
- (id)log;	// IMP=0x00100000000349a0
- (id)newMenuItem;	// IMP=0x0010000000034820
- (_Bool)shouldShowMenuItem;	// IMP=0x00100000000347b0
- (void)networkController:(id)arg1 didChangeNetworkState:(id)arg2;	// IMP=0x0010000000034730
- (void)dealloc;	// IMP=0x00100000000346b0
- (id)initWithNetworkController:(id)arg1;	// IMP=0x00100000000340a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

