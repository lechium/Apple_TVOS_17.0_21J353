//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@class FSNode, NSFileHandle, NSString, NSURL;

@protocol LSOpenStagingDirectoryManagerIOPersonality <NSObject>
- (optional_c7a1edd4)stagingDirectoryInfoForPersonaUniqueString:(NSString *)arg1 error:(id *)arg2;
- (optional_78373086)stagingDirectoryKeyForNode:(FSNode *)arg1 error:(id *)arg2;
- (optional_78373086)stagingDirectoryKeyForFileHandle:(NSFileHandle *)arg1 error:(id *)arg2;
- (FSNode *)makeStagingDirectoryNodeInContainer:(NSURL *)arg1 error:(id *)arg2;
- (NSURL *)mainSystemContainerURL;
- (NSURL *)mainUserContainerURL;
@end

