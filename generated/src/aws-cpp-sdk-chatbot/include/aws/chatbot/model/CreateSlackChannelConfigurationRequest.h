﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class CreateSlackChannelConfigurationRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API CreateSlackChannelConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSlackChannelConfiguration"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline const Aws::String& GetSlackTeamId() const{ return m_slackTeamId; }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline bool SlackTeamIdHasBeenSet() const { return m_slackTeamIdHasBeenSet; }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline void SetSlackTeamId(const Aws::String& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = value; }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline void SetSlackTeamId(Aws::String&& value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId = std::move(value); }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline void SetSlackTeamId(const char* value) { m_slackTeamIdHasBeenSet = true; m_slackTeamId.assign(value); }

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackTeamId(const Aws::String& value) { SetSlackTeamId(value); return *this;}

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackTeamId(Aws::String&& value) { SetSlackTeamId(std::move(value)); return *this;}

    /**
     * The ID of the Slack workspace authorized with AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackTeamId(const char* value) { SetSlackTeamId(value); return *this;}


    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline const Aws::String& GetSlackChannelId() const{ return m_slackChannelId; }

    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline bool SlackChannelIdHasBeenSet() const { return m_slackChannelIdHasBeenSet; }

    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline void SetSlackChannelId(const Aws::String& value) { m_slackChannelIdHasBeenSet = true; m_slackChannelId = value; }

    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline void SetSlackChannelId(Aws::String&& value) { m_slackChannelIdHasBeenSet = true; m_slackChannelId = std::move(value); }

    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline void SetSlackChannelId(const char* value) { m_slackChannelIdHasBeenSet = true; m_slackChannelId.assign(value); }

    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelId(const Aws::String& value) { SetSlackChannelId(value); return *this;}

    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelId(Aws::String&& value) { SetSlackChannelId(std::move(value)); return *this;}

    /**
     * The ID of the Slack channel. To get the ID, open Slack, right click on the
     * channel name in the left pane, then choose Copy Link. The channel ID is the
     * 9-character string at the end of the URL. For example, ABCBBLZZZ.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelId(const char* value) { SetSlackChannelId(value); return *this;}


    /**
     * The name of the Slack Channel.
     */
    inline const Aws::String& GetSlackChannelName() const{ return m_slackChannelName; }

    /**
     * The name of the Slack Channel.
     */
    inline bool SlackChannelNameHasBeenSet() const { return m_slackChannelNameHasBeenSet; }

    /**
     * The name of the Slack Channel.
     */
    inline void SetSlackChannelName(const Aws::String& value) { m_slackChannelNameHasBeenSet = true; m_slackChannelName = value; }

    /**
     * The name of the Slack Channel.
     */
    inline void SetSlackChannelName(Aws::String&& value) { m_slackChannelNameHasBeenSet = true; m_slackChannelName = std::move(value); }

    /**
     * The name of the Slack Channel.
     */
    inline void SetSlackChannelName(const char* value) { m_slackChannelNameHasBeenSet = true; m_slackChannelName.assign(value); }

    /**
     * The name of the Slack Channel.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelName(const Aws::String& value) { SetSlackChannelName(value); return *this;}

    /**
     * The name of the Slack Channel.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelName(Aws::String&& value) { SetSlackChannelName(std::move(value)); return *this;}

    /**
     * The name of the Slack Channel.
     */
    inline CreateSlackChannelConfigurationRequest& WithSlackChannelName(const char* value) { SetSlackChannelName(value); return *this;}


    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline const Aws::Vector<Aws::String>& GetSnsTopicArns() const{ return m_snsTopicArns; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline bool SnsTopicArnsHasBeenSet() const { return m_snsTopicArnsHasBeenSet; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline void SetSnsTopicArns(const Aws::Vector<Aws::String>& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = value; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline void SetSnsTopicArns(Aws::Vector<Aws::String>&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns = std::move(value); }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithSnsTopicArns(const Aws::Vector<Aws::String>& value) { SetSnsTopicArns(value); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithSnsTopicArns(Aws::Vector<Aws::String>&& value) { SetSnsTopicArns(std::move(value)); return *this;}

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& AddSnsTopicArns(const Aws::String& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& AddSnsTopicArns(Aws::String&& value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(std::move(value)); return *this; }

    /**
     * The ARNs of the SNS topics that deliver notifications to AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& AddSnsTopicArns(const char* value) { m_snsTopicArnsHasBeenSet = true; m_snsTopicArns.push_back(value); return *this; }


    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the IAM role that defines the permissions for AWS Chatbot. This is a
     * user-defined role that AWS Chatbot will assume. This is not the service-linked
     * role. For more information, see IAM Policies for AWS Chatbot.
     */
    inline CreateSlackChannelConfigurationRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * The name of the configuration.
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    /**
     * The name of the configuration.
     */
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    /**
     * The name of the configuration.
     */
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    /**
     * The name of the configuration.
     */
    inline CreateSlackChannelConfigurationRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * The name of the configuration.
     */
    inline CreateSlackChannelConfigurationRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * The name of the configuration.
     */
    inline CreateSlackChannelConfigurationRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline CreateSlackChannelConfigurationRequest& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline CreateSlackChannelConfigurationRequest& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}

    /**
     * Logging levels include ERROR, INFO, or NONE.
     */
    inline CreateSlackChannelConfigurationRequest& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}


    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline const Aws::Vector<Aws::String>& GetGuardrailPolicyArns() const{ return m_guardrailPolicyArns; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline bool GuardrailPolicyArnsHasBeenSet() const { return m_guardrailPolicyArnsHasBeenSet; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline void SetGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns = value; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline void SetGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns = std::move(value); }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline CreateSlackChannelConfigurationRequest& WithGuardrailPolicyArns(const Aws::Vector<Aws::String>& value) { SetGuardrailPolicyArns(value); return *this;}

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline CreateSlackChannelConfigurationRequest& WithGuardrailPolicyArns(Aws::Vector<Aws::String>&& value) { SetGuardrailPolicyArns(std::move(value)); return *this;}

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline CreateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(const Aws::String& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline CreateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(Aws::String&& value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(std::move(value)); return *this; }

    /**
     * The list of IAM policy ARNs that are applied as channel guardrails. The AWS
     * managed 'AdministratorAccess' policy is applied by default if this is not set.
     */
    inline CreateSlackChannelConfigurationRequest& AddGuardrailPolicyArns(const char* value) { m_guardrailPolicyArnsHasBeenSet = true; m_guardrailPolicyArns.push_back(value); return *this; }


    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline bool GetUserAuthorizationRequired() const{ return m_userAuthorizationRequired; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline bool UserAuthorizationRequiredHasBeenSet() const { return m_userAuthorizationRequiredHasBeenSet; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline void SetUserAuthorizationRequired(bool value) { m_userAuthorizationRequiredHasBeenSet = true; m_userAuthorizationRequired = value; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline CreateSlackChannelConfigurationRequest& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}


    /**
     * A list of tags to apply to the configuration.
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * A list of tags to apply to the configuration.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * A list of tags to apply to the configuration.
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * A list of tags to apply to the configuration.
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * A list of tags to apply to the configuration.
     */
    inline CreateSlackChannelConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * A list of tags to apply to the configuration.
     */
    inline CreateSlackChannelConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A list of tags to apply to the configuration.
     */
    inline CreateSlackChannelConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * A list of tags to apply to the configuration.
     */
    inline CreateSlackChannelConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_slackTeamId;
    bool m_slackTeamIdHasBeenSet = false;

    Aws::String m_slackChannelId;
    bool m_slackChannelIdHasBeenSet = false;

    Aws::String m_slackChannelName;
    bool m_slackChannelNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_snsTopicArns;
    bool m_snsTopicArnsHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_guardrailPolicyArns;
    bool m_guardrailPolicyArnsHasBeenSet = false;

    bool m_userAuthorizationRequired;
    bool m_userAuthorizationRequiredHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
