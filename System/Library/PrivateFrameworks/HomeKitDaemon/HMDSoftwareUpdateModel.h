//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateModel
{
    NSDate *_releaseDate;	// 8 = 0x8
}

+ (id)properties;	// IMP=0x0010000000677757
+ (Class)cd_entityClass;	// IMP=0x00100000008b2b63
+ (id)cd_parentReferenceName;	// IMP=0x00100000008b2b56
- (void).cxx_destruct;	// IMP=0x0000000000677744
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
- (id)cd_fetchManagedObjectWithError:(id *)arg1;	// IMP=0x00000000008b2789

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @dynamic documentationMetadata;
@property(copy, nonatomic) NSNumber *downloadSize; // @dynamic downloadSize;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSNumber *installDuration; // @dynamic installDuration;
@property(copy, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;

@end

