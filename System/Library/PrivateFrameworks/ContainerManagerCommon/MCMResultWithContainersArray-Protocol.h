//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/MCMResult-Protocol.h>

@class MCMClientIdentity, NSArray;

@protocol MCMResultWithContainersArray <MCMResult>
- (id)initWithContainerPaths:(NSArray *)arg1 containerIdentities:(NSArray *)arg2 includePath:(_Bool)arg3 clientIdentity:(MCMClientIdentity *)arg4 skipSandboxExtensions:(_Bool)arg5;
- (id)initWithContainers:(NSArray *)arg1 includePath:(_Bool)arg2 includeInfo:(_Bool)arg3 includeUserManagedAssetsRelPath:(_Bool)arg4 clientIdentity:(MCMClientIdentity *)arg5 skipSandboxExtensions:(_Bool)arg6;
@end

