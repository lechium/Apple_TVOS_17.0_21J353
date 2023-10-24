//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFFileCoder.h"

__attribute__((visibility("hidden")))
@interface WFSecurityScopedFileCoder : WFFileCoder
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00800000000ec060
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ec2f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ec2eb
- (id)sharedTemporaryDirectory;	// IMP=0x00000000000ec2d2
- (id)sharedDirectory;	// IMP=0x00000000000ec2ca
- (void)waitForFileAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec2bf
- (id)decodeFileWithCoder:(id)arg1 fileShouldBeDeletedOnDeallocation:(_Bool *)arg2 fileIsSecurityScoped:(_Bool *)arg3;	// IMP=0x00000000000ec1e2
- (void)archiveFileAtURL:(id)arg1 fileShouldBeDeletedOnDeallocation:(_Bool)arg2 withCoder:(id)arg3;	// IMP=0x00000000000ec068

@end

