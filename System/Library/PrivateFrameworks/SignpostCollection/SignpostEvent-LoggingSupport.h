//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostEvent.h>

@interface SignpostEvent (LoggingSupport)
- (id)initWithOSLogEventProxy:(id)arg1 shouldCompose:(_Bool)arg2;	// IMP=0x00600000000057ce
- (void)_parseMetadataSegments:(_Bool)arg1;	// IMP=0x0060000000005589
- (void)_checkForFormatStringFlags:(id)arg1 shouldCompose:(_Bool)arg2;	// IMP=0x0060000000005419
- (void)_handleSignpostTelemetryPlaceholder:(id)arg1;	// IMP=0x00600000000050c3
- (void)_handleSignpostDescriptionPlaceholder:(id)arg1;	// IMP=0x0060000000004b51
@end

