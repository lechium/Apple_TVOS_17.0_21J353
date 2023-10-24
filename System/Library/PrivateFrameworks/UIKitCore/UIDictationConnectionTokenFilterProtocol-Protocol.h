//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIDictationConnection, UIDictationToken;

@protocol UIDictationConnectionTokenFilterProtocol <NSObject>
- (void)dictationConnection:(UIDictationConnection *)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(_Bool)arg3;
- (void)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 processFilteredToken:(UIDictationToken *)arg3 forFinalize:(_Bool)arg4;
- (_Bool)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(UIDictationToken *)arg3;
- (id)dictationConnection:(UIDictationConnection *)arg1 willFilterTokensWithLanguageModel:(NSString *)arg2 forFinalize:(_Bool)arg3;
- (struct __CFString *)resultTransformForLanguageModel:(NSString *)arg1;
@end

