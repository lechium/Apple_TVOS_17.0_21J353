//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSKeychainOptions;

@interface AMSDClientCertificateTask : AMSTask
{
    AMSKeychainOptions *_options;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000ca89
@property(retain) AMSKeychainOptions *options; // @synthesize options=_options;
- (id)performClientCertChainRequest;	// IMP=0x001000000000c9fc
- (id)initWithOptions:(id)arg1;	// IMP=0x001000000000c98e

@end

