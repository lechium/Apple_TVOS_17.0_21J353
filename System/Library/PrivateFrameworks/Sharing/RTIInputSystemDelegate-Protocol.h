//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class NSData, NSString, RTIDocumentState, RTIDocumentTraits, RTIInputOperation, RTIInputSystemService, RTIInputSystemServiceSession, RTIInputSystemSession, RTISessionOptions, RTISupplementalLexicon, TISupplementalLexicon;

@protocol RTIInputSystemDelegate <NSObject>
- (void)inputSystemService:(RTIInputSystemService *)arg1 didCreateInputSession:(RTIInputSystemServiceSession *)arg2;

@optional
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 performInputOperation:(RTIInputOperation *)arg3 withResponse:(void (^)(unsigned long long))arg4;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 performInputOperation:(RTIInputOperation *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didRemoveRTISupplementalLexicon:(RTISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didAddRTISupplementalLexicon:(RTISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didRemoveSupplementalLexicon:(TISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 didAddSupplementalLexicon:(TISupplementalLexicon *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 textSuggestionsChanged:(NSData *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidUnpause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidPause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 documentTraitsDidChange:(RTIDocumentTraits *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSession:(RTIInputSystemServiceSession *)arg2 documentStateDidChange:(RTIDocumentState *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDocumentDidChange:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidDie:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidEnd:(RTIInputSystemServiceSession *)arg2 options:(RTISessionOptions *)arg3 completion:(void (^)(void))arg4;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidEnd:(RTIInputSystemServiceSession *)arg2 options:(RTISessionOptions *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidEnd:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidBegin:(RTIInputSystemServiceSession *)arg2 options:(RTISessionOptions *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidBegin:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 prepareForInputSession:(RTIInputSystemSession *)arg2 options:(RTISessionOptions *)arg3;
@end

