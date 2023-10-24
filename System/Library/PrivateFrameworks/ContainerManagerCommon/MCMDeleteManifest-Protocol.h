//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSCopying-Protocol.h>
#import <ContainerManagerCommon/NSObject-Protocol.h>

@class MCMConcreteContainerIdentity, MCMLibraryRepairForUser, NSURL;
@protocol MCMDeleteManifest;

@protocol MCMDeleteManifest <NSObject, NSCopying>
@property(readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property(readonly, nonatomic) NSURL *readURL;
@property(readonly, nonatomic) NSURL *writeURL;
- (id <MCMDeleteManifest>)deleteManifestAfterRemovingUsingLibraryRepairForUser:(MCMLibraryRepairForUser *)arg1 error:(id *)arg2;
- (id <MCMDeleteManifest>)deleteManifestAfterWritingUsingLibraryRepairForUser:(MCMLibraryRepairForUser *)arg1 error:(id *)arg2;
@end

