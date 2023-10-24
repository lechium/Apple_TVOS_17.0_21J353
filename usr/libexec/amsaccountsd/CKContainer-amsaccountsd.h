//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKContainer.h>

@class NSString;
@protocol AMSDCloudDataDatabase;

@interface CKContainer (amsaccountsd)
- (id)_fetchShareMetadataForURL:(id)arg1 withToken:(id)arg2;	// IMP=0x002000000004943c
- (id)_acceptShareWithShareMetadata:(id)arg1;	// IMP=0x00100000000492d3
- (id)status;	// IMP=0x00100000000491bd
- (id)acceptShareURL:(id)arg1 withToken:(id)arg2;	// IMP=0x00100000000490ee
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> sharedDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> publicDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> privateDatabase;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

