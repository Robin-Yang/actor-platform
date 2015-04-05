//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/im/actor/model/modules/BaseModule.java
//

#ifndef _ImActorModelModulesBaseModule_H_
#define _ImActorModelModulesBaseModule_H_

@class AMPeer;
@class AMRpcException;
@class DKActorRef;
@class ImActorModelModulesModules;
@class ImActorModelModulesUpdates;
@class ImActorModelNetworkParserRequest;
@class ImActorModelNetworkParserResponse;
@protocol AMCryptoProvider;
@protocol AMStorageProvider;
@protocol DKKeyValueEngine;
@protocol DKPreferencesStorage;
@protocol JavaLangRunnable;

#include "J2ObjC_header.h"
#include "im/actor/model/network/RpcCallback.h"

@interface ImActorModelModulesBaseModule : NSObject {
}

- (instancetype)initWithImActorModelModulesModules:(ImActorModelModulesModules *)modules;

- (ImActorModelModulesModules *)modules;

- (ImActorModelModulesUpdates *)updates;

- (void)runOnUiThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (DKActorRef *)sendActor;

- (DKActorRef *)dialogsActor;

- (DKActorRef *)dialogsHistoryActor;

- (DKActorRef *)ownReadActor;

- (DKActorRef *)plainReceiveActor;

- (DKActorRef *)conversationActorWithAMPeer:(AMPeer *)peer;

- (DKActorRef *)conversationHistoryActorWithAMPeer:(AMPeer *)peer;

- (id<DKPreferencesStorage>)preferences;

- (id<AMCryptoProvider>)crypto;

- (id<AMStorageProvider>)storage;

- (jint)myUid;

- (void)requestWithImActorModelNetworkParserRequest:(ImActorModelNetworkParserRequest *)request
                                  withAMRpcCallback:(id<AMRpcCallback>)callback;

- (void)requestWithImActorModelNetworkParserRequest:(ImActorModelNetworkParserRequest *)request;

- (id<DKKeyValueEngine>)users;

- (id<DKKeyValueEngine>)groups;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesBaseModule)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_DIALOGS_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_DIALOGS_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_USERS_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_USERS_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_GROUPS_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_GROUPS_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_DOWNLOADS_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_DOWNLOADS_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_CONTACTS_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_CONTACTS_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_NOTIFICATIONS_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_NOTIFICATIONS_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_SEARCH_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_SEARCH_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_CHAT_PREFIX_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_CHAT_PREFIX_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_PENDING_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_PENDING_, NSString *)

FOUNDATION_EXPORT NSString *ImActorModelModulesBaseModule_STORAGE_CURSOR_;
J2OBJC_STATIC_FIELD_GETTER(ImActorModelModulesBaseModule, STORAGE_CURSOR_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesBaseModule)

@interface ImActorModelModulesBaseModule_$1 : NSObject < AMRpcCallback > {
}

- (void)onResultWithImActorModelNetworkParserResponse:(ImActorModelNetworkParserResponse *)response;

- (void)onErrorWithAMRpcException:(AMRpcException *)e;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesBaseModule_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesBaseModule_$1)

#endif // _ImActorModelModulesBaseModule_H_
