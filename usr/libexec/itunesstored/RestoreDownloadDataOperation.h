//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RestoreDownloadDataOperation
{
}

- (_Bool)_restoreDataForBundleID:(id)arg1 restoreState:(long long)arg2 error:(id *)arg3;	// IMP=0x002000000006c6e3
- (_Bool)_isFatalRestoreError:(id)arg1;	// IMP=0x001000000006c6db
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x001000000006c63f
- (void)run;	// IMP=0x001000000006bdde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

